package io.tonapi.sdk

import io.ktor.client.*
import io.ktor.client.call.*
import io.ktor.client.request.*
import io.ktor.http.*

open class TonApiMethodBase(
    private val version: Int,
    val httpClient: HttpClient
) {

    @Throws(Throwable::class)
    suspend inline fun <reified T> execute(section: String, method: String, block: Params.() -> Unit): T {
        val params = block.get()
        val url = buildUrl(section, method, params)
        print("api url: ${url.toString()}")
        return request(url)
    }

    inline fun (Params.() -> Unit).get() = Params().apply(this)

    fun buildUrl(section: String, method: String, params: Params): Url {
        val urlBuilder = makeUrlBuilder(section, method)
        if (!params.query.isEmpty) {
            for ((key, value) in params.query.map) {
                urlBuilder.parameters.append(key, value.toString())
            }
        }
        return urlBuilder.build()
    }

    class Params {
        val query = Query()
    }

    class Query {
        val map = hashMapOf<String, Any>()

        val isEmpty: Boolean
            get() = map.isEmpty()

        operator fun set(key: String, value: Any) {
            map[key] = value
        }
    }

    @Throws(Throwable::class)
    suspend inline fun <reified T> request(url: Url): T {
        val call = httpClient.get(url).call
        if (call.response.status.isSuccess()) {
            return call.body()
        }
        throw TonApiThrow(call.body())
    }

    private fun makeUrlBuilder(section: String, method: String): URLBuilder {
        return URLBuilder(
            protocol = URLProtocol.HTTPS,
            host = "tonapi.io",
            pathSegments = arrayListOf("v$version", section, method)
        )
    }
}
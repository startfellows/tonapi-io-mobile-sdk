package io.tonapi.sdk

import io.ktor.client.*
import io.ktor.client.call.*
import io.ktor.client.plugins.contentnegotiation.*
import io.ktor.client.request.*
import io.ktor.client.statement.*
import io.ktor.http.*
import io.ktor.serialization.kotlinx.json.*
import io.tonapi.sdk.tonkeeper.TonKeeperAuth
import io.tonapi.sdk.utils.KeyValue
import kotlinx.serialization.json.Json

class TonApiSdk {

    private val keyValue = KeyValue()
    private val httpClient = HttpClient {
        install(ContentNegotiation) {
            json(Json {
                ignoreUnknownKeys = true
            })
        }
    }

    val wallet: String?
        get() = keyValue.getString(walletKey, null)

    val v1 = TonApiMethodV1(httpClient)

    fun tonKeeperAuth(scheme: String, callback: (wallet: String) -> Unit): TonKeeperAuth {
        return TonKeeperAuth(this, scheme) {
            keyValue.setString(walletKey, it)
            callback(it)
        }
    }

    fun logout() {
        keyValue.setString(walletKey, null)
    }

    companion object {
        private const val walletKey = "wallet"
    }
}
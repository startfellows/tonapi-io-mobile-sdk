package io.tonapi.sdk.tonkeeper

import io.tonapi.sdk.TonApiSdk
import io.tonapi.sdk.utils.ApplicationDispatcher
import io.tonapi.sdk.utils.URLEncoder
import io.tonapi.sdk.utils.UrlParser
import kotlinx.coroutines.GlobalScope
import kotlinx.coroutines.launch

class TonKeeperAuthImpl(
    private val tonApiSdk: TonApiSdk,
    private val scheme: String,
    private val callback: (wallet: String) -> Unit,
) {

    private val returnUrl = URLEncoder.encode("nudsme.com/mobile_redirect.html?scheme=$scheme")

    private val authRequestPath = "beta.stickerface.io/api/tonkeeper/authRequest?return_url=$returnUrl"

    val url: String
        get() = "https://app.tonkeeper.com/ton-login/$authRequestPath"

    fun returnReadyWallet(): Boolean {
        if (tonApiSdk.wallet.isNullOrEmpty()) {
            return false
        }
        callback(tonApiSdk.wallet!!)
        return true
    }

    fun handleURL(url: String): Boolean {
        val parsedUrl = UrlParser(url)
        val tonLogin = parsedUrl.tonLogin?:return false
        print("tonLogin: $tonLogin")
        resolveTonLogin(tonLogin)
        return true
    }

    private fun resolveTonLogin(tonLogin: String) {
        GlobalScope.launch(ApplicationDispatcher) {
            try {
                val wallet = tonApiSdk.v1.authLogin(tonLogin).payload.firstOrNull()?.address?:""
                print("wallet: $wallet")
                callback(wallet)
            } catch (e: Throwable) {
                print("error: $e")
                callback("")
            }
        }
    }


    private val UrlParser.tonLogin: String?
        get() = getQuery("tonlogin")?.removeSuffix(".")
}
package io.tonapi.sdk.tonkeeper

import android.content.Context
import android.content.Intent
import android.net.Uri
import io.tonapi.sdk.TonApiSdk
import java.lang.RuntimeException

actual class TonKeeperAuth actual constructor(
    tonApiSdk: TonApiSdk,
    scheme: String,
    callback: (wallet: String) -> Unit
) {

    private val impl = TonKeeperAuthImpl(tonApiSdk, scheme, callback)

    fun launch(context: Context) {
        if (!impl.returnReadyWallet()) {
            context.startActivity(Intent(Intent.ACTION_VIEW).also {
                it.data = Uri.parse(impl.url)
            })
        }
    }

    actual fun launch() {
        throw RuntimeException("use launch with context")
    }

    actual fun handleURL(url: String) = impl.handleURL(url)
}
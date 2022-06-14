package io.tonapi.sdk.tonkeeper

import android.content.Context
import android.content.Intent
import android.net.Uri
import java.lang.RuntimeException

actual class TonKeeperTransfer actual constructor(
    address: String,
    amount: Float,
    text: String?
) {

    private val impl = TonKeeperTransferImpl(address, amount, text)

    fun launch(context: Context) {
        context.startActivity(Intent(Intent.ACTION_VIEW).also {
            it.data = Uri.parse(impl.url)
        })
    }

    actual fun launch() {
        throw RuntimeException("use launch with context")
    }
}
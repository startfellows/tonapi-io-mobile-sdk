package io.tonapi.sdk.tonkeeper

import platform.Foundation.NSURL
import platform.UIKit.UIApplication

actual class TonKeeperTransfer actual constructor(
    address: String,
    amount: Float,
    text: String?
) {

    private val impl = TonKeeperTransferImpl(address, amount, text)

    actual fun launch() {
        print("url: ${impl.url}")
        NSURL.URLWithString(impl.url)?.let {
            UIApplication.sharedApplication.openURL(it)
        }
    }

}
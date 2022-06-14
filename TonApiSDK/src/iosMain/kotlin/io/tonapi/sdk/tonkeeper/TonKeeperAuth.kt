package io.tonapi.sdk.tonkeeper

import io.tonapi.sdk.TonApiSdk
import platform.Foundation.NSURL
import platform.UIKit.UIApplication

actual class TonKeeperAuth actual constructor(
    tonApiSdk: TonApiSdk,
    scheme: String,
    callback: (wallet: String) -> Unit
) {

    private val impl = TonKeeperAuthImpl(tonApiSdk, scheme, callback)

    actual fun launch() {
        if (!impl.returnReadyWallet()) {
            NSURL.URLWithString(impl.url)?.let {
                UIApplication.sharedApplication.openURL(it)
            }
        }
    }

    actual fun handleURL(url: String) = impl.handleURL(url)
}
package io.tonapi.sdk.tonkeeper

import io.tonapi.sdk.TonApiSdk

expect class TonKeeperAuth (
    tonApiSdk: TonApiSdk,
    scheme: String,
    callback: (wallet: String) -> Unit,
) {

    fun launch()

    fun handleURL(url: String): Boolean

}
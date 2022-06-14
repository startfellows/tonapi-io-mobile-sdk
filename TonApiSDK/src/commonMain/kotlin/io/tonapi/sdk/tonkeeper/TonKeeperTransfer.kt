package io.tonapi.sdk.tonkeeper

expect class TonKeeperTransfer(
    address: String,
    amount: Float,
    text: String? = null
) {

    fun launch()
}
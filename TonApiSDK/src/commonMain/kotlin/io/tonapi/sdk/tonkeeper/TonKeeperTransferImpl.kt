package io.tonapi.sdk.tonkeeper

import com.ionspin.kotlin.bignum.decimal.toBigDecimal
import io.tonapi.sdk.utils.URLEncoder

class TonKeeperTransferImpl(
    address: String,
    amount: Float,
    text: String? = null
) {

    private val internalAmount = (amount * 1000000000f).toBigDecimal()

    private val textEncoded = URLEncoder.encode(text)

    val url: String = "https://app.tonkeeper.com/transfer/$address?amount=${internalAmount.toStringExpanded()}&text=$textEncoded"

}
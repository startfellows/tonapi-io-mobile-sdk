package io.tonapi.sdk.tonkeeper

import kotlinx.serialization.Serializable

class TonKeeperData {

    @Serializable
    data class Payload(
        val type: String,
        val address: String
    )

    @Serializable
    data class LoginResolve(
        val client_id: String,
        val payload: ArrayList<Payload>
    )

}
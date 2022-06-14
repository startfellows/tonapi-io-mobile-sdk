package io.tonapi.sdk

class TonApiThrow(
    private val error: TonApiData.Error
): Throwable(error.description) {

    fun getLocalizedMessage(): String {
        return error.description
    }
}
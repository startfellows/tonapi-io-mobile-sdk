package io.tonapi.sdk.utils

import java.nio.charset.StandardCharsets

actual object URLEncoder {

    actual fun encode(value: String?): String? {
        if (value.isNullOrEmpty()) {
            return null
        }
        return java.net.URLEncoder.encode(value, StandardCharsets.UTF_8.toString())
    }
}
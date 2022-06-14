package io.tonapi.sdk.utils

import platform.Foundation.*

actual object URLEncoder {

    actual fun encode(value: String?): String? {
        if (value.isNullOrEmpty()) {
            return null
        }
        val nsString = (value as NSString)
        nsString.stringByAddingPercentEncodingWithAllowedCharacters(NSCharacterSet.URLQueryAllowedCharacterSet())
        return nsString as String
    }
}
package io.tonapi.sdk.utils

import platform.Foundation.NSUserDefaults

actual class KeyValue {

    private val sharedPreferences: NSUserDefaults by lazy {
        NSUserDefaults.standardUserDefaults
    }

    private fun foundKey(key: String): Boolean = sharedPreferences.objectForKey(key) != null

    actual fun getBoolean(key: String, default: Boolean): Boolean {
        if (!foundKey(key)) {
            return default
        }
        return sharedPreferences.boolForKey(key)
    }

    actual fun setBoolean(key: String, value: Boolean) {
        sharedPreferences.setBool(value, key)
    }

    actual fun getString(key: String, default: String?): String? {
        if (!foundKey(key)) {
            return default
        }
        return sharedPreferences.stringForKey(key)
    }

    actual fun setString(key: String, value: String?) {
        if (value == null) {
            sharedPreferences.removeObjectForKey(key)
        } else {
            sharedPreferences.setObject(value, key)
        }
    }

    actual fun setLong(key: String, value: Long) {
        setString(key, value.toString())
    }

    actual fun getLong(key: String, default: Long): Long {
        val string = getString(key, null)
        if (string.isNullOrEmpty()) {
            return default
        }
        return string.toLongOrNull()?:return default
    }

    actual fun getInt(key: String, default: Int): Int {
        if (!foundKey(key)) {
            return default
        }
        return sharedPreferences.integerForKey(key).toInt()
    }

    actual fun setInt(key: String, value: Int) {
        sharedPreferences.setInteger(value.toLong(), key)
    }

    actual fun getFloat(key: String, default: Float): Float {
        if (!foundKey(key)) {
            return default
        }
        return sharedPreferences.floatForKey(key)
    }

    actual fun setFloat(key: String, value: Float) {
        sharedPreferences.setFloat(value, key)
    }

}
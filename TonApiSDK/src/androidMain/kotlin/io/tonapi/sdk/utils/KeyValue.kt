package io.tonapi.sdk.utils

import android.content.Context
import android.content.SharedPreferences

actual class KeyValue {

    private val sharedPreferences: SharedPreferences by lazy {
        val context = getAndroidContext()?:throw RuntimeException("Not found Android context")
        context.getSharedPreferences(null, Context.MODE_PRIVATE)
    }

    actual fun getBoolean(key: String, default: Boolean): Boolean {
        return sharedPreferences.getBoolean(key, default)
    }

    actual fun setBoolean(key: String, value: Boolean) {
        sharedPreferences.edit()
            .putBoolean(key, value)
            .apply()
    }

    actual fun getString(key: String, default: String?): String? {
        return sharedPreferences.getString(key, default)
    }

    actual fun setString(key: String, value: String?) = when (value) {
        null -> sharedPreferences.edit()
            .remove(key)
            .apply()
        else -> sharedPreferences.edit().putString(key, value).apply()
    }

    actual fun getLong(key: String, default: Long): Long {
        return sharedPreferences.getLong(key, default)
    }

    actual fun setLong(key: String, value: Long) {
        sharedPreferences.edit()
            .putLong(key, value)
            .apply()
    }

    actual fun getInt(key: String, default: Int): Int {
        return sharedPreferences.getInt(key, default)
    }

    actual fun setInt(key: String, value: Int) {
        sharedPreferences.edit()
            .putInt(key, value)
            .apply()
    }

    actual fun getFloat(key: String, default: Float): Float {
        return sharedPreferences.getFloat(key, default)
    }

    actual fun setFloat(key: String, value: Float) {
        sharedPreferences.edit()
            .putFloat(key, value)
            .apply()
    }

}

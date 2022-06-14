package io.tonapi.sdk.utils

expect class KeyValue() {
    fun getBoolean(key: String, default: Boolean = false): Boolean
    fun setBoolean(key: String, value: Boolean)

    fun getString(key: String, default: String? = null): String?
    fun setString(key: String, value: String?)

    fun getLong(key: String, default: Long = 0L): Long
    fun setLong(key: String, value: Long)

    fun getInt(key: String, default: Int = 0): Int
    fun setInt(key: String, value: Int)

    fun getFloat(key: String, default: Float = 0f): Float
    fun setFloat(key: String, value: Float)

}
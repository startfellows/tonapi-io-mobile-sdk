package io.tonapi.sdk.utils

class UrlParser(
    private val url: String
) {

    val scheme: String?
        get() {
            val index = url.indexOf(":")
            return if (index == NOT_FOUND) null else url.subSequence(0, index).toString()
        }

    val path: String?
        get() {
            var index = url.indexOf(SCHEME_END)
            if (index == NOT_FOUND) {
                return null
            }
            var value = url.subSequence(index + SCHEME_END.length, url.length - 1).toString()
            index = value.indexOf("?")
            if (index != NOT_FOUND) {
                value = value.subSequence(0, index).toString()
            }
            index = value.indexOf("#")
            if (index != NOT_FOUND) {
                value = value.subSequence(0, index).toString()
            }
            return value
        }

    val query: String?
        get() {
            val index = url.indexOf(QUERY_START)
            return if (index == NOT_FOUND) null else url.subSequence(index + QUERY_START.length, url.length).toString()
        }

    fun getQuery(key: String): String? {
        val query = query?:return null
        val values = query.split("&")
        for (value in values) {
            val item = QueryValue(value)
            if (item.key == key) {
                return item.value
            }
        }
        return null
    }

    override fun toString() = url

    private class QueryValue(q: String) {

        private val split = q.split("=")

        val key = split.getOrNull(0)

        val value = split.getOrNull(1)
    }

    companion object {
        private const val NOT_FOUND = -1
        private const val SCHEME_END = "://"
        private const val QUERY_START = "?"
    }
}
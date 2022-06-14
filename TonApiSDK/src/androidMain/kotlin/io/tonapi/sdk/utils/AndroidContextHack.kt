package io.tonapi.sdk.utils

import android.annotation.SuppressLint
import android.content.Context

@SuppressLint("StaticFieldLeak")
private var savedContext: Context? = null

@SuppressLint("PrivateApi", "DiscouragedPrivateApi")
fun getAndroidContext(): Context? {
    if (savedContext == null) {
        savedContext = try {
            val activityThread = Class.forName("android.app.ActivityThread")
            activityThread.getDeclaredMethod("currentApplication").invoke(null) as? Context
        } catch (e: Throwable) {
            null
        }
    }
    return savedContext
}


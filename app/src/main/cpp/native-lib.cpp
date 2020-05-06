#include <jni.h>
#include <string>

extern "C"{
    #include <libavutil/avutil.h>
}

extern "C" JNIEXPORT jstring JNICALL
Java_com_hyy_ffmpegsample_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

const char *getFFmpegVer() {
    return av_version_info();
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_hyy_ffmpegsample_MainActivity_getFFmpegVersion(JNIEnv *env, jobject thiz) {
    return env->NewStringUTF(getFFmpegVer());
}
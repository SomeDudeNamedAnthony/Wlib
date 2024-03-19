#ifndef WLIB_WINDOW_CREATION_MODE
#define WLIB_WINDOW_CREATION_MODE

///@brief A generic type for defining what API to use when creating windows.
typedef enum WindowCreationMode {

    ///@brief Create a window using the native API. (win32 - Windows, Cocoa - OS X/macOS, X/Waylib - Linux, etc...)
    WLIB_NATIVE_CC,

    ///@brief Create a window using Khronos's EGL api. Useful for OpenGLES.
    WLIB_EGL_CC,

    ///@brief Create a window using Off-Screen Mesa (OSMESA) api. More (https://docs.mesa3d.org/osmesa.html)
    WLIB_OSMESA_CC
} WindowCreationMode;

#endif //WLIB_WINDOW_CREATION_MODE

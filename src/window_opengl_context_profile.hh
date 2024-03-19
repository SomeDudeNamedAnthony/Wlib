#ifndef WLIB_WINDOW_OPENGL_CONTEXT_PROFILE
#define WLIB_WINDOW_OPENGL_CONTEXT_PROFILE

///@brief A generic type for defining which profile to use in a "modern" OpenGL context.
typedef enum WindowOpenGLContextProfile {

    ///@brief Let the OS define what profile to use.
    WLIB_OGLC_UNDEFINED_PROFILE,

    ///@brief Force a core profile. Required for OpenGL 3.3 on OS X/macOS.
    WLIB_OGLC_CORE_PROFILE,

    ///@brief Forces a compatibility profile. *Ignored on OS X/macOS.
    WLIB_OGLC_COMPATIBILITY_PROFILE
} WindowOpenGLContextProfile;

#endif //WLIB_WINDOW_OPENGL_CONTEXT_PROFILE

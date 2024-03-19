#ifndef WLIB_WINDOW_CONFIG
#define WLIB_WINDOW_CONFIG

#include "./window_context_type.hh"
#include "./window_creation_mode.hh"
#include "./window_opengl_context_profile.hh"

namespace Wlib {


    class WindowConfig {
    public:
        bool resizable = true;
        bool visible = true;
        bool borderless = false;
        bool debug = false;
        bool doubleBuffered = true;
        bool centerCursor = true;
        bool upmost = false;
        bool perPixelTransparency = false;
        bool mousePassThrough = false;
        bool highDPI = false;
        bool retina = false;
        bool glForwardCompatibility = false;

        WindowContextType contextType = WLIB_OPENGL_WINDOW;
        WindowCreationMode creationMode = WLIB_NATIVE_CC;
        WindowOpenGLContextProfile glContextProfile = WLIB_OGLC_UNDEFINED_PROFILE;
    };
}

#endif //WLIB_WINDOW_CONFIG

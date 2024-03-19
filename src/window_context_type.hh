#ifndef WLIB_WINDOW_CONTEXT_TYPE
#define WLIB_WINDOW_CONTEXT_TYPE

///@brief A generic type for defining what type of window to create.
typedef enum WindowContextType {
    WLIB_OPENGL_WINDOW,
    WLIB_OPENGLES_WINDOW,
    WLIB_UNDEFINED_WINDOW
} WindowContextType;

#endif //WLIB_WINDOW_CONTEXT_TYPE

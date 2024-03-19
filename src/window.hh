#ifndef WLIB_WINDOW
#define WLIB_WINDOW
#include <GLFW/glfw3.h>
#include <string>

#include "./window_config.hh"

namespace Wlib {

    ///@brief A pseudo interface for controling windows.
    class Window {
    protected:
        GLFWwindow *_handle;

        Window();

    public:
        //Setters
        void setSize(int width, int height);
        void setPosition(int x, int y);
        void setSizeLimits(int minX, int minY, int maxX, int maxY);
        void setTitle(std::string const &title);
        void setMonitor(int index);
        void setIcon(unsigned char *pixels, int width, int height);

        //Getters
        int *getSize();
        int *getPosition();

        //Misc.

    };
}

#endif //WLIB_WINDOW

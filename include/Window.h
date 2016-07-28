#include <iostream>
#include <string> 
#include <SDL2/SDL.h>
#include <GL/glut.h>
class Window {
public:
    Window(unsigned int height, unsigned int width, const char* title);
    void init();
private:
    unsigned int _width;
    unsigned int _height;
    const char* _title;
    SDL_Window* window;
    
};

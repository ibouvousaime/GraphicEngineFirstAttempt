#include "Window.h"

Window::Window(unsigned int height, unsigned int width, const char* title){
    init();
    _height=height;
    _width=width;
    _title=title;
    window=SDL_CreateWindow(_title,SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,_width,_height,SDL_WINDOW_OPENGL);
}

void Window::init(){
    SDL_Init(SDL_INIT_EVERYTHING);
    
}

#include <iostream>
#include "Window.h"

int main(int argc, char **argv) {
    
    Window w(800,600,"Graphics engine");
    glClearColor(0.0,0.0,0.0,0.0);
    int x;
    std::cin >> x;
    
    return 0;
}

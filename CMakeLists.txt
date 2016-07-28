cmake_minimum_required(VERSION 2.6)
project(graphicsenginefirstattempt)

include_directories(include)
# find_package(SDL2 REQUIRED)

INCLUDE(FindPkgConfig)
PKG_SEARCH_MODULE(SDL2 REQUIRED sdl2)
INCLUDE_DIRECTORIES(${SDL2_INCLUDE_DIRS})


add_executable(graphicsenginefirstattempt src/main.cpp src/Window.cpp)
find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)
TARGET_LINK_LIBRARIES(graphicsenginefirstattempt ${SDL2_LIBRARIES})
include_directories( ${OPENGL_INCLUDE_DIRS}  ${GLUT_INCLUDE_DIRS} )


target_link_libraries(graphicsenginefirstattempt ${OPENGL_LIBRARIES} ${GLUT_LIBRARY} )


install(TARGETS graphicsenginefirstattempt RUNTIME DESTINATION bin)

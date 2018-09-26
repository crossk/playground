project(sandbox)
cmake_minimum_required(VERSION 2.8)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5Widgets CONFIG REQUIRED)

#set(sandbox_SOURCES ./src/main.cpp)
file(GLOB_RECURSE ALL_SOURCES ./src/*.cpp ./src/gui/*.cpp ./src/gui/*.h ./src/gui/*.ui)


add_executable(${PROJECT_NAME} WIN32 ${ALL_SOURCES})
target_link_libraries(${PROJECT_NAME} Qt5::Widgets)

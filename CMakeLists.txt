cmake_minimum_required(VERSION 3.17)
project(PD2)

set(CMAKE_CXX_STANDARD 14)

add_executable(PD2 SIngleton/Singleton.cpp SIngleton/Singleton.h Observer/observer.cpp Observer/observer.h Adapter/Adapter.cpp Adapter/Adapter.h AFactory/AbstractFactory.cpp AFactory/AbstractFactory.h Builder/Builder.cpp Builder/Builder.h)
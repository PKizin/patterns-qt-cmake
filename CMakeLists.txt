cmake_minimum_required(VERSION 2.8)

project(patterns)

file(GLOB SOURCES
    *.h
    *.cpp
    singleton/*.h
    singleton/*.cpp
    prototype/*.h
    prototype/*.cpp
    factory_method/*.h
    factory_method/*.cpp
    abstract_factory/*.h
    abstract_factory/*.cpp
    bridge/*.h
    bridge/*.cpp
    decorator/*.h
    decorator/*.cpp
    adapter/*.h
    adapter/*.cpp
)

include_directories(
    singleton
    prototype
    factory_method
    abstract_factory
    bridge
    decorator
    adapter
)

add_executable(${PROJECT_NAME} ${SOURCES})

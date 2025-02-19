cmake_minimum_required(VERSION 3.0)
project(openann)

set(CMAKE_BUILD_TYPE         Debug)
set(CMAKE_CXX_FLAGS          "${CMAKE_CXX_FLAGS} -std=c++14")

add_executable(
    openann
    src/main.cpp
    src/Neuron.cpp
    src/Layer.cpp
    src/Matrix.cpp
    src/NeuralNetwork.cpp

)
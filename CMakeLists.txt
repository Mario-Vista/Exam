cmake_minimum_required(VERSION 3.24)
project(ASDClion)

set(CMAKE_CXX_STANDARD 17)

add_executable(ASDClion main.cpp cmake-build-debug/MaxHeap.h cmake-build-debug/MaxPriorityQueue.h cmake-build-debug/Grafo/GrafoNonOrientato.h cmake-build-debug/Grafo/Node.h cmake-build-debug/Grafo/Vertice.h)

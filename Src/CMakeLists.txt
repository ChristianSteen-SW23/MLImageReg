cmake_minimum_required(VERSION 3.26)
project(untitled2 C)

set(CMAKE_C_STANDARD 11)

add_executable(mainProgram mainProgram.c
        imgMaker.c
        imgMaker.h
        population.c
        population.h
        testAPopulation.c
        testAPopulation.h)

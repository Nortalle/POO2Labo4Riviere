cmake_minimum_required(VERSION 3.10)
project(POO2Labo4Riviere)

set(CMAKE_CXX_STANDARD 11)

add_executable(POO2Labo4Riviere main.cpp Containers/Container.cpp Containers/Container.h Containers/Boat.cpp Containers/Boat.h Containers/Bank.cpp Containers/Bank.h People/Person.cpp People/Person.h Controller.cpp Controller.h People/Driver.cpp People/Driver.h People/NonDriver.cpp People/NonDriver.h)
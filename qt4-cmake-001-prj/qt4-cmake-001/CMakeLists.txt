cmake_minimum_required(VERSION 3.5)

project(qt4-cmake-001 VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_VERBOSE_MAKEFILE true)

FIND_PACKAGE(Qt4)
SET(QT_USE_QTXML 1)
#SET(QT_USE_QTGUI 1)
include(${QT_USE_FILE})
file(GLOB_RECURSE HEADERS include/*.hpp include/*.h)
add_definitions(${QT_DEFINITIONS})


find_package(Qt4 REQUIRED QtCore QtGui)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
        deneme.h deneme.cpp
        deneme2.h deneme2.cpp
)

add_executable(qt4-cmake-001 ${PROJECT_SOURCES})

target_link_libraries(qt4-cmake-001 ${QT_LIBRARIES})

INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_BINARY_DIR})

cmake_minimum_required(VERSION 3.29)
project(src)

set(CMAKE_CXX_STANDARD 17)

include_directories(../../public)
include_directories(../../core)
include_directories(../../core/sourcehook)
include_directories(../../core/provider)
include_directories(../../core/provider/source2)
include_directories(../../third_party/amtl)
include_directories(../../third_party/amtl/amtl)
include_directories(../../../hl2sdk)
include_directories(../../../hl2sdk-dota)
include_directories(../../../hl2sdk-dota/public)

include_directories(./)
include_directories(./src)
include_directories(./public)

add_library(soup-object SHARED extension.cpp
        src/SoupObject.cpp
        src/SoupObject.h
        public/ISoupObject.h
        public/ISoupObjectPlugin.h)

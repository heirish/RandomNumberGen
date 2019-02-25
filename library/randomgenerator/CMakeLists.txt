cmake_minimum_required(VERSION 3.0)
aux_source_directory(. DIR_LIB_SRCS)
add_library(randomgenerator STATIC ${DIR_LIB_SRCS})
#https://stackoverflow.com/questions/46608677/cmake-handle-linking-of-shared-library-with-static-libraries
set_property(TARGET randomgenerator PROPERTY POSITION_INDEPENDENT_CODE ON)

install (TARGETS randomgenerator DESTINATION lib)
install (FILES  numberGenerator.hpp DESTINATION include)

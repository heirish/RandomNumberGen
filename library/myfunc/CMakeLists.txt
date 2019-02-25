cmake_minimum_required(VERSION 3.6)
aux_source_directory(. DIR_LIB_SRCS)
add_library(myfunc STATIC ${DIR_LIB_SRCS})
#https://stackoverflow.com/questions/46608677/cmake-handle-linking-of-shared-library-with-static-libraries
set_property(TARGET myfunc PROPERTY POSITION_INDEPENDENT_CODE ON)

install (TARGETS myfunc DESTINATION lib)
install (FILES  MyFunction.h DESTINATION include)

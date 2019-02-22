aux_source_directory(. DIR_LIB_SRCS)
add_library(myfunc STATIC ${DIR_LIB_SRCS})

install (TARGETS myfunc DESTINATION lib)
install (FILES  MyFunction.h DESTINATION include)

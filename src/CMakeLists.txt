add_library(learned_index_lib
    index/binary_search.cpp
)

target_include_directories(learned_index_lib PUBLIC
    ${CMAKE_SOURCE_DIR}/include
)
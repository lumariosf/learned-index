include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.15.2.zip
)
FetchContent_MakeAvailable(googletest)

add_executable(test_binary_search test_binary_search.cpp)
target_link_libraries(test_binary_search
    learned_index_lib
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(test_binary_search)
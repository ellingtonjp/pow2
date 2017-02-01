include_directories(../src /usr/local/include)
link_directories(/usr/local/lib)
add_executable(Test test_pow2.cpp)
target_link_libraries(Test Pow2 gtest gtest_main)

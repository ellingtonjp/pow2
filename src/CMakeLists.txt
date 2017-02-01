add_library (Pow2 pow2.cpp pow2.h)
add_executable(demo main.cpp)
target_link_libraries(demo Pow2)

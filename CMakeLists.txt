cmake_minimum_required(VERSION 3.30.0 FATAL_ERROR)


project(EidotEngine)

add_executable(EidotEngine src/main.cpp 

src/EidotEngine/Vectors.h src/EidotEngine/Vectors.cpp 
src/EidotEngine/Color.h src/EidotEngine/Color.cpp 
src/EidotEngine/Surface.h src/EidotEngine/Surface.cpp 
)

add_subdirectory(external/glad)
target_link_libraries(EidotEngine glad)

add_subdirectory(external/glfw)
target_link_libraries(EidotEngine glfw)
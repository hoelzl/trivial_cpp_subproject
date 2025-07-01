SET(CMAKE_CXX_STANDARD 20)

add_subdirectory(lib)
add_subdirectory(test)

add_executable({{cookiecutter.project_slug}} main.cpp)
target_link_libraries({{cookiecutter.project_slug}} PRIVATE {{cookiecutter.project_slug}}_lib)

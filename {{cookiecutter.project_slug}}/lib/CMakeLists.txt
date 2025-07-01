add_library({{cookiecutter.project_slug}}_lib
        {{cookiecutter.project_slug}}.cpp
        {{cookiecutter.project_slug}}.h
)
target_include_directories({{cookiecutter.project_slug}}_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

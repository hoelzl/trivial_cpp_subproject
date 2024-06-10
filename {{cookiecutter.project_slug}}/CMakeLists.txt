add_library({{cookiecutter.project_slug}}_lib
    {{cookiecutter.project_slug}}.h
    {{cookiecutter.project_slug}}.cpp
)

add_executable ({{cookiecutter.project_slug}}
    {{cookiecutter.project_slug}}_main.cpp
)
target_link_libraries({{cookiecutter.project_slug}}
	{{cookiecutter.project_slug}}_lib
)

add_executable({{cookiecutter.project_slug}}_test
    {{cookiecutter.project_slug}}_test.cpp
)
target_link_libraries({{cookiecutter.project_slug}}_test
    Catch2WithMain
	{{cookiecutter.project_slug}}_lib
)
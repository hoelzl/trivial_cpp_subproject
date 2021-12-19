cmake_minimum_required (VERSION 3.21)


add_library("{{cookiecutter.project_slug}}_lib")

target_sources("{{cookiecutter.project_slug}}_lib"
    PUBLIC
    "include/{{cookiecutter.project_slug}}.hpp")

target_sources("{{cookiecutter.project_slug}}_lib"
    PRIVATE
    "src/{{cookiecutter.project_slug}}.cpp")

target_include_directories("{{cookiecutter.project_slug}}_lib"
    PUBLIC 
    "include")

target_link_libraries("{{cookiecutter.project_slug}}_lib"
    "GSL")


add_executable ("{{cookiecutter.project_slug}}")

target_sources("{{cookiecutter.project_slug}}" PRIVATE
    "src/{{cookiecutter.project_slug}}_main.cpp")

target_link_libraries("{{cookiecutter.project_slug}}"
    "GSL"
	"{{cookiecutter.project_slug}}_lib")

add_subdirectory(test)

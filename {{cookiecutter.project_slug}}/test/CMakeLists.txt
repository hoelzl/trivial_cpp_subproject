enable_testing()

add_executable({{cookiecutter.project_slug}}_test {{cookiecutter.project_slug}}_test.cpp)

target_link_libraries({{cookiecutter.project_slug}}_test
    PRIVATE
	{{cookiecutter.project_slug}}_lib
    Catch2::Catch2WithMain
)

include(CTest)
add_test(NAME {{cookiecutter.project_slug}}_test
         COMMAND {{cookiecutter.project_slug}}_test
)

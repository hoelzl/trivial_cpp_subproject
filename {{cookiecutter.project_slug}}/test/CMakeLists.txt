add_executable("{{cookiecutter.project_slug}}_test")

target_sources("{{cookiecutter.project_slug}}_test" PRIVATE
    "{{cookiecutter.project_slug}}_test.cpp"
    "{{cookiecutter.project_slug}}_test_main.cpp"
)

target_link_libraries("{{cookiecutter.project_slug}}_test"
    "doctest"
	"{{cookiecutter.project_slug}}_lib"
)
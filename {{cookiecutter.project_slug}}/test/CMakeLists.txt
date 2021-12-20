add_executable("{{cookiecutter.project_slug}}_test")

target_sources("{{cookiecutter.project_slug}}_test" PRIVATE
    "{{cookiecutter.project_slug}}_test.cpp"
)

target_link_libraries("{{cookiecutter.project_slug}}_test"
    "Catch2WithMain"
	"{{cookiecutter.project_slug}}_lib"
)
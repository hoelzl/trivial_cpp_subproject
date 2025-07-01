#include <iostream>

#include "{{cookiecutter.project_slug}}.h"


namespace {{cookiecutter.project_namespace}} {

void print_{{cookiecutter.project_slug}}_info()
{
	std::cout << "== Program Info ==\n"
	          << "  name:      {{cookiecutter.project_slug}}\n"
	          << "  namespace: {{cookiecutter.project_namespace}}\n";
}

} // namespace {{cookiecutter.project_namespace}}

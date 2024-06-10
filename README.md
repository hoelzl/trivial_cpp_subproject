# A Cookiecutter Template for Subprojects

I use this template to create subprojects for my C++ course materials. It
assumess that there is a surrounding project that provides the following
libraries:

- `Catch2`: an interface library that provides a `doctest.hpp` header.

It generates a library and an executable target, as well as a test target.

The generated module includes just enough code to test whether building tests
and the application work.

## Usage

```
cookiecutter https://github.com/hoelzl/trivial_cpp_subproject
```

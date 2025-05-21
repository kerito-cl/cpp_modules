#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery Creation Form", 145, 137)
{
    _target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Shrubbery Creation Destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other)
{
    _target = other._target;
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    if (this != &other)
    {
        _target = other._target;
    }
    return *this;
}

void ShrubberyCreationForm::success() const
{
    const std::string tree = R"(
       _-_
    /~~   ~~\
 /~~         ~~\
{               }
 \  _-     -_  /
   ~  \\ //  ~
_- -   | | _- _
  _ -  | |   -_
      // \\
      )";

    std::ofstream outFile(_target + "_shrubbery");
    if (outFile)
        outFile << tree;

}

void ShrubberyCreationForm::executionFail() const
{
    std::cout << "Shrubbery Failed" << std::endl;
}
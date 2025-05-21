#include "Intern.hpp"


Intern::Intern()
{
    std::cout << "Intern Default constructor called" << std::endl;
}

Intern::~Intern()
{
    std::cout << "Intern Destructor called" << std::endl;
}

Intern::Intern(const Intern& other)
{
    std::cout << "Intern Copy constructor called" << std::endl;
    *this = other;
}
Intern& Intern::operator=(const Intern& other)
{
    (void)other;
    std::cout << "Intern Copy assignment operator called" << std::endl;
    return *this;
}

AForm *Intern::makeForm(std::string formName, std::string formTarget)
{
    AForm *newForm = nullptr;
    std::string arr[] = {"robotomy request","presidential pardon", "shrubbery creation"};
    int i = 0;

    while (arr[i] != formName && i < 3)
        i++;

    switch (i)
    {
    case 0:
        newForm = new RobotomyRequestForm(formTarget);
        break;
    case 1:
        newForm = new PresidentialPardonForm(formTarget);
        break;

    case 2:
        newForm = new ShrubberyCreationForm(formTarget);
        break;
    default:
        std::cout << "\033[35m" << formName << " form has not been found"<< "\033[0m"<< std::endl;
    }    
    return newForm;

}
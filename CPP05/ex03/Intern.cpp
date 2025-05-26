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
        std::cout << "\033[32m" << "Intern creates "<< formName << "\033[0m"<< std::endl;
        break;
    case 1:
        newForm = new PresidentialPardonForm(formTarget);
        std::cout << "\033[32m" << "Intern creates "<< formName << "\033[0m"<< std::endl;
        break;

    case 2:
        newForm = new ShrubberyCreationForm(formTarget);
        std::cout << "\033[32m" << "Intern creates "<< formName << "\033[0m"<< std::endl;
        break;
    default:
        std::cout << "\033[32m" << formName << " form has not been found"<< "\033[0m"<< std::endl;
    }    
    return newForm;

}
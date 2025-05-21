#include "PresidentialPardonForm.hpp"



PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidential Form", 25, 5)
{
    _target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Presidential Pardon Destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : AForm(other)
{
    _target = other._target;
}
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
    if (this != &other)
    {
        _target = other._target;
    }
    return *this;
}

void PresidentialPardonForm::success() const
{
    std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

void PresidentialPardonForm::executionFail() const
{
    std::cout << "Zaphod Beeblebrox did not pardon " << _target << std::endl;
}

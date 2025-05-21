
#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy Form", 72, 45)
{
    _target = target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Robotomy Request Destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(other)
{
    _target = other._target;
}
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
    if (this != &other)
    {
        _target = other._target;
    }
    return *this;
}
void RobotomyRequestForm::success() const
{
    std::cout << _target << " has been robotomized successfully 50% of the time" << std::endl;
}

void RobotomyRequestForm::executionFail() const
{
    std::cout <<  "Robotomy failed." << std::endl;
}
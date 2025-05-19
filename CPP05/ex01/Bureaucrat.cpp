#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Bureaucrat Default constructor called" << std::endl;
    _name = "Default";
}

Bureaucrat::Bureaucrat(std::string name)
{
    std::cout << "Bureaucrat Default constructor called" << std::endl;
    _name = name;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat Destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
{
    std::cout << "Bureaucrat Copy constructor called" << std::endl;
        _name = other._name;
        _grade = other._grade;
}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
    std::cout << "Bureaucrat Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        _name = other._name;
        _grade = other._grade;
    }
    return *this;
}

std::string Bureaucrat::getName()
{
    return _name;
}
void Bureaucrat::setName(std::string newName)
{
    _name = newName;
}
unsigned int Bureaucrat::getGrade()
{
    return _grade;
}
void Bureaucrat::setGrade(unsigned int newGrade)
{
    if (newGrade < 1)
        throw GradeTooHighException();
    else if (newGrade > 150)
        throw GradeTooLowException();
    else
        _grade = newGrade;
}

void Bureaucrat::increaseGrade()
{
    _grade--;
    if (_grade < 1)
    {
        _grade = 1;
        throw GradeTooHighException();
    }
}

void Bureaucrat::decreaseGrade()
{
    _grade++;
    if (_grade > 150)
    {
        _grade = 150;
        throw GradeTooLowException();
    }
}

const char * Bureaucrat::GradeTooHighException::what()  const noexcept 
{ 
    return "Grade is too high!";
}

const char * Bureaucrat::GradeTooLowException::what()  const noexcept 
{ 
    return "Grade is too low!";
}



std::ostream& operator<<(std::ostream& os, Bureaucrat& b)
{
    os << b.getName() << ", bureacrat grade " << b.getGrade();
    return os;
}
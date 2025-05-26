#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name)
{
    _grade = grade;
    if (_grade < 1)
        throw GradeTooHighException();
    else if (_grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name)
{
    std::cout << "Bureaucrat Copy constructor called" << std::endl;
    _grade = other._grade;
}

std::string Bureaucrat::getName() const
{
    return _name;
}

unsigned int Bureaucrat::getGrade() const
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


void Bureaucrat::signForm(AForm & a)
{
    try
    {
        a.beSigned(*this);
    }
    catch(const std::exception& e)
    {
        std::cerr << "\033[31m"<< getName() << " could not signed " << a.getName() << " because "<< e.what()<< "\033[0m" << std::endl;
    }
    
}


void Bureaucrat::executeForm(AForm const & form)
{
    try
    {
        form.execute(*this);
    }
    catch(const std::exception& e)
    {
        std::cerr << "\033[31m"<< getName() << " could not execute " << form.getName() << " because "<< e.what() << "\033[0m" << std::endl;
    }
    

}

std::ostream& operator<<(std::ostream& os, Bureaucrat& b)
{
    os << b.getName() << ", bureacrat grade " << b.getGrade();
    return os;
}
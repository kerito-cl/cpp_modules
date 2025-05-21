#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name("Default"), _gradeToSign(100) ,_gradeToExecute(10) 
{
    std::cout << "Form Default constructor called" << std::endl;
}

Form::Form(std::string name, unsigned int signN, unsigned int executeN) : _name(name), _gradeToSign(signN), _gradeToExecute(executeN)
{
    std::cout << "Form Default constructor called" << std::endl;
    if (_gradeToSign > 150 || _gradeToExecute > 150)
        throw GradeTooLowException();
    else if (_gradeToSign < 1 || _gradeToExecute < 1)
        throw GradeTooHighException();
}

Form::~Form()
{
    std::cout << "Form Destructor called" << std::endl;
}

Form::Form(const Form& other) : _name(other._name),_gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{
    std::cout << "Form Copy constructor called" << std::endl;
    if (_gradeToSign > 150 || _gradeToExecute > 150)
        throw GradeTooLowException();
    else if (_gradeToSign < 1 || _gradeToExecute < 1)
        throw GradeTooHighException();
}
Form& Form::operator=(const Form& other)
{
    std::cout << "Form Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        _isSigned = other._isSigned;
    }
    return *this;
}


const char * Form::GradeTooHighException::what()  const noexcept 
{ 
    return "Grade is too high!";
}

const char * Form::GradeTooLowException::what()  const noexcept 
{ 
    return "Grade is too low!";
}

void Form::beSigned(Bureaucrat& a)
{
    if (a.getGrade() <= _gradeToSign)
    {
        std::cout << "\033[33m"<< a.getName() << " signed " << getName() << "\033[0m"<<std::endl;
        _isSigned = true;
    }
    else
        throw GradeTooLowException();
}
unsigned int Form::getToExecutionGrade()
{
    return _gradeToExecute;
}
unsigned int Form::getToSignGrade()
{
    return _gradeToSign;
}
std::string Form::getName()
{
    return _name;
}

bool Form::getStatus()
{
    return _isSigned;
}

std::ostream& operator<<(std::ostream& os, Form& b)
{
    os << "Form Name: " << b.getName() << std::endl;
    os << "Form sign grade: " << b.getToSignGrade() << std::endl;
    os << "Form execution grade: " << b.getToExecutionGrade() << std::endl;
    if (b.getStatus() == false)
        os << "Form Status: Not Signed" << std::endl;
    else
        os << "Form Status: Signed" << std::endl;
    return os;
}
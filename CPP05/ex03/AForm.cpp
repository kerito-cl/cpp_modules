#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : _name("Default"), _gradeToSign(100) ,_gradeToExecute(10) 
{
    std::cout << "AForm Default constructor called" << std::endl;
}

AForm::AForm(std::string name, unsigned int signN, unsigned int executeN) : _name(name), _gradeToSign(signN), _gradeToExecute(executeN)
{
    std::cout << "AForm Default constructor called" << std::endl;
    if (_gradeToSign > 150 || _gradeToExecute > 150)
        throw GradeTooLowException();
    else if (_gradeToSign < 1 || _gradeToExecute < 1)
        throw GradeTooHighException();
}

AForm::~AForm()
{
    std::cout << "AForm Destructor called" << std::endl;
}

AForm::AForm(const AForm& other) : _name(other._name),_gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{
    std::cout << "AForm Copy constructor called" << std::endl;
    if (_gradeToSign > 150 || _gradeToExecute > 150)
        throw GradeTooLowException();
    else if (_gradeToSign < 1 || _gradeToExecute < 1)
        throw GradeTooHighException();
}
AForm& AForm::operator=(const AForm& other)
{
    std::cout << "AForm Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        _isSigned = other._isSigned;
    }
    return *this;
}


const char * AForm::GradeTooHighException::what()  const noexcept 
{ 
    return "Grade is too high!";
}

const char * AForm::GradeTooLowException::what()  const noexcept 
{ 
    return "Grade is too low!";
}

void AForm::beSigned(Bureaucrat& a)
{
    if (a.getGrade() <= _gradeToSign)
    {
        std::cout << "\033[33m"<< a.getName() << " signed " << getName() << "\033[0m"<<std::endl;
        _isSigned = true;
    }
    else
        throw GradeTooLowException();
}
unsigned int AForm::getToExecutionGrade()
{
    return _gradeToExecute;
}
unsigned int AForm::getToSignGrade()
{
    return _gradeToSign;
}
std::string AForm::getName() const
{
    return _name;
}

bool AForm::getStatus()
{
    return _isSigned;
}

void AForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() <= _gradeToExecute)
    {
        std::cout << "\033[33m"<< executor.getName() << " executed " << getName() << "\033[0m"<<std::endl;
        success();
    }
    else
    {
        executionFail();
        throw GradeTooLowException();
    }
}

std::ostream& operator<<(std::ostream& os, AForm& b)
{
    os << "AForm Name: " << b.getName() << std::endl;
    os << "AForm sign grade: " << b.getToSignGrade() << std::endl;
    os << "AForm execution grade: " << b.getToExecutionGrade() << std::endl;
    if (b.getStatus() == false)
        os << "AForm Status: Not Signed" << std::endl;
    else
        os << "AForm Status: Signed" << std::endl;
    return os;
}


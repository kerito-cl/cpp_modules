#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
private:
    const std::string _name;
    unsigned int    _grade;
    
public:

    class GradeTooHighException : public std::exception
    {
        public:
        const char * what()  const noexcept override;
    };

    class GradeTooLowException : public std::exception
    {
        public:
            const char * what()  const noexcept override;
    };

    Bureaucrat(std::string name, unsigned int grade);
    Bureaucrat(const Bureaucrat& other);
    Bureaucrat& operator=(const Bureaucrat& other) = delete;
    ~Bureaucrat();

    std::string getName() const;
    unsigned int getGrade() const ;
    void setGrade(unsigned int newGrade);
    void increaseGrade();
    void decreaseGrade();

    void signForm(AForm  & a);
    void executeForm(AForm const & form);
};

std::ostream& operator<<(std::ostream& os, Bureaucrat& b);

#endif
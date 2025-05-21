#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string _name;
        bool _isSigned = false;
        const unsigned int _gradeToSign;
        const unsigned int _gradeToExecute;
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

        Form();
        Form(std::string name, unsigned int signN, unsigned int executeN);
        Form(const Form& other);
        Form& operator=(const Form& other);
        ~Form();

        void beSigned(Bureaucrat& a);
        unsigned int getToExecutionGrade();
        unsigned int getToSignGrade();
        std::string getName();
        bool getStatus();


};


std::ostream& operator<<(std::ostream& os, Form& b);
#endif
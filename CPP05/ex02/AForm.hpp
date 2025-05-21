#ifndef AFORM_HPP
#define AFORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        const std::string _name;
        bool _isSigned = false;
        const unsigned int _gradeToSign;
        const unsigned int _gradeToExecute;
        virtual void success() const = 0;
        virtual void executionFail() const = 0;
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

        AForm();
        AForm(std::string name, unsigned int signN, unsigned int executeN);
        AForm(const AForm& other);
        AForm& operator=(const AForm& other);
        virtual ~AForm();

        virtual void execute(Bureaucrat const & executor) const;
        virtual void beSigned(Bureaucrat& a) ;
        virtual unsigned int getToExecutionGrade();
        virtual unsigned int getToSignGrade();
        virtual std::string getName() const;
        virtual bool getStatus();


};


std::ostream& operator<<(std::ostream& os, AForm& b);
#endif
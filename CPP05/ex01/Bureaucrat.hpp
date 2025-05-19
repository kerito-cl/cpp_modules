#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>



class Bureaucrat
{
private:
    std::string _name;
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

    Bureaucrat();
    Bureaucrat(std::string name);
    Bureaucrat(const Bureaucrat& other);
    Bureaucrat& operator=(const Bureaucrat& other);
    ~Bureaucrat();

    std::string getName();
    void setName(std::string newName);
    unsigned int getGrade();
    void setGrade(unsigned int newGrade);
    void increaseGrade();
    void decreaseGrade();
};

std::ostream& operator<<(std::ostream& os, Bureaucrat& b);

#endif
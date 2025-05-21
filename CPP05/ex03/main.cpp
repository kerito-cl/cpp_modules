#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"


int main(void)
{
    Bureaucrat kero;
    Bureaucrat julio("Julio");
    Bureaucrat anna("Anna");

    std::cout << "-----------Bureaucrats Tests------------" << std::endl;

    try
    {
        kero.setGrade(1);
        julio.setGrade(123);
        anna.setGrade(140);
        std::cout << "\033[31m" << kero << std::endl;
        std::cout << "\033[35m" << julio << std::endl;
        std::cout << "\033[34m"<< anna << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "\033[07m"<< "Caught exception: " << e.what() << std::endl;
    }

    std::cout << "-----------------------" << std::endl;
    try
    {
        kero.increaseGrade();
    }
    catch (std::exception & e)
    {
        std::cout <<"\033[36m"<< "Caught exception: " << e.what() << "\033[0m"<< std::endl;
    }

    std::cout << "-----------------------" << std::endl;

    try
    {
        anna.decreaseGrade();
    }
    catch (std::exception & e)
    {
        std::cout <<"\033[36m"<< "Caught exception: " << e.what() << "\033[0m"<< std::endl;
    }



    std::cout << "----------FORM TESTS -------------" << std::endl;

    ShrubberyCreationForm plants("plants");
    PresidentialPardonForm kennedy("Kennedy");
    RobotomyRequestForm robot("Robot");

    std::cout << "-----------------------" << std::endl;

    try
    {
        anna.executeForm(plants);
        anna.signForm(plants);
        kero.executeForm(plants);
        kero.signForm(plants);
        julio.executeForm(plants);
        julio.signForm(plants);
    }
    catch (std::exception & e)
    {
        std::cout << "-----------------------" << std::endl;
        std::cout << "\033[35m"<< "Caught exception: " << e.what() << "\033[0m"<<std::endl;
    }

    std::cout << "-----------------------" << std::endl;
    try
    {
        anna.executeForm(kennedy);
        anna.signForm(kennedy);
        kero.executeForm(kennedy);
        kero.signForm(kennedy);
        julio.executeForm(kennedy);
        julio.signForm(kennedy);
    }
    catch (std::exception & e)
    {
        std::cout << "-----------------------" << std::endl;
        std::cout << "\033[35m"<< "Caught exception: " << e.what() << "\033[0m"<<std::endl;
    }

    std::cout << "-----------------------" << std::endl;

    try
    {
        anna.executeForm(robot);
        anna.signForm(robot);
        kero.executeForm(robot);
        kero.signForm(robot);
        julio.executeForm(robot);
        julio.signForm(robot);
    }
    catch (std::exception & e)
    {
        std::cout << "-----------------------" << std::endl;
        std::cout << "\033[35m"<< "Caught exception: " << e.what() << "\033[0m"<<std::endl;
    }
    
    std::cout << "-----------------------" << std::endl;

    std::cout << "----------INTERN TESTS -------------" << std::endl;
    try
    {
        Intern matias;
        AForm * shrubbery = matias.makeForm("shrubbery creation", "plants");
        AForm * presidential = matias.makeForm("presidential pardon", "plants");
        AForm * robotomy = matias.makeForm("robotomy request", "plants");
        std::cout << "-----------------------" << std::endl;
        std::cout << "\033[35m" << *shrubbery << "\033[0m"<< std::endl;
        std::cout << "\033[35m" << *presidential << "\033[0m"<< std::endl;
        std::cout << "\033[35m" << *robotomy << "\033[0m"<< std::endl;

        std::cout << "-----------------------" << std::endl;

        anna.executeForm(*shrubbery);
        kero.executeForm(*shrubbery);

        std::cout << "-----------------------" << std::endl;
        delete shrubbery;
        delete presidential;
        delete robotomy;

    }
    catch (std::exception & e)
    {
        std::cout << "-----------------------" << std::endl;
        std::cout << "\033[35m"<< "Caught exception: " << e.what() << "\033[0m"<<std::endl;
    }
    std::cout << "-----------------------" << std::endl;
    return 0;
}

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
    ShrubberyCreationForm plants("plants");
    PresidentialPardonForm kennedy("Kennedy");
    RobotomyRequestForm robot("Robot");

    std::cout << "-----------------------" << std::endl;

    try
    {
        Bureaucrat kero("Kero", 1);
        Bureaucrat julio("Julio", 130);
        Bureaucrat anna("Anna", 150);
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
        Bureaucrat kero("Kero", 1);
        Bureaucrat julio("Julio", 130);
        Bureaucrat anna("Anna", 150);
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
        Bureaucrat kero("Kero", 1);
        Bureaucrat julio("Julio", 130);
        Bureaucrat anna("Anna", 150);
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
    return 0;
}

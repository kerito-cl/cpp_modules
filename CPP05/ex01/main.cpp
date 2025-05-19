#include "Bureaucrat.hpp"


int main(void)
{
    Bureaucrat kero;
    Bureaucrat julio("Julio");
    Bureaucrat anna("Anna");

    std::cout << "-----------------------" << std::endl;

    try
    {
        kero.setGrade(1);
        julio.setGrade(123);
        anna.setGrade(150);
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

    std::cout << "-----------------------" << std::endl;
    return 0;
}

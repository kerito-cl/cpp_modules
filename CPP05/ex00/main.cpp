#include "Bureaucrat.hpp"


int main(void)
{

    try
    {
        Bureaucrat kero("Kero", 1);
        Bureaucrat julio("Julio", 130);
        Bureaucrat anna("Anna", 150);
        std::cout << "\033[31m" << kero << std::endl;
        std::cout << "\033[35m" << julio << std::endl;
        std::cout << "\033[34m"<< anna <<  "\033[0m" <<std::endl;
    }
    catch (std::exception & e)
    {
       std::cout << "\033[07m"<< "Caught exception: " << e.what() << "\033[0m"<<std::endl;
    }

    std::cout << "-----------------------" << std::endl;
    try
    {
        Bureaucrat kero("Kero", 1);
        kero.increaseGrade();
    }
    catch (std::exception & e)
    {
        std::cout <<"\033[36m"<< "Caught exception: " << e.what() << "\033[0m"<< std::endl;
    }

    std::cout << "-----------------------" << std::endl;

    try
    {
        Bureaucrat anna("Anna", 150);
        anna.decreaseGrade();
    }
    catch (std::exception & e)
    {
        std::cout <<"\033[36m"<< "Caught exception: " << e.what() << "\033[0m"<< std::endl;
    }

    std::cout << "-----------------------" << std::endl;
    return 0;
}

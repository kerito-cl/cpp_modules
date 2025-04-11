#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
        try
        {
            const Animal *a = new Dog();
            delete a;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        std::cout << "---------------------------" << std::endl;
        try
        {

            const Dog* j = new Dog();
            const Cat* i = new Cat();
            j->makeSound();
            i->makeSound();
            delete j;
            delete i;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        
    return 0;
}

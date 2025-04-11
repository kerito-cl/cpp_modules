#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
    {
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        delete meta;
        delete j;
        delete i;
    }
    std::cout << "---------------------------" << std::endl;
    {
        const Animal* arr[100];

        for (size_t k=0; k<100; k++)
        {
            if (k <50)
                arr[k] = new Cat();
            else
                arr[k] = new Dog();
        }
        for (size_t k=0; k<100; k++)
            delete arr[k];
    }
    return 0;
}

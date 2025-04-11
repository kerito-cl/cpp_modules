#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Default constructor called" << std::endl;
    _type = "Cat";
    _brain = new Brain;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
    delete _brain;
}

Cat::Cat(const Cat& other) : Animal(other)
{
    std::cout << "Cat copy constructor called" << std::endl;
    _type = other._type;
}
Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        _type = other._type;
    }
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow" << std::endl;
}



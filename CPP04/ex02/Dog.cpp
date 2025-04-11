#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Default constructor called" << std::endl;
    _type = "Dog";
    _brain = new Brain;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
    delete _brain;
}

Dog::Dog(const Dog& other) : Animal(other)
{
    std::cout << "Dog Copy constructor called" << std::endl;
    _type = other._type;
}
Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        _type = other._type;
    }
    return *this;
}

void Dog::makeSound() const
{
        std::cout << "Woof Woof!!" << std::endl;
}
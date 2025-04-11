#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Default constructor called" << std::endl;
    _type = "Weird Animal";
}

Animal::~Animal()
{
    std::cout << "Destructor called" << std::endl;
}

Animal::Animal(const Animal& other)
{
    std::cout << "Copy constructor called" << std::endl;
    _type = other._type;
}
Animal& Animal::operator=(const Animal& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        _type = other._type;
    }
    return *this;
}

void Animal::makeSound() const
{
        std::cout << "zZZZzzZZZZzzzzz" << std::endl;
}

 std::string Animal::getType() const
{
    return _type;
}

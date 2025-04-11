#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Default constructor called" << std::endl;
    _type = "Weird WrongAnimal";
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    std::cout << "Copy constructor called" << std::endl;
    _type = other._type;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        _type = other._type;
    }
    return *this;
}

void WrongAnimal::makeSound() const
{
    std::cout << "zZZZzzZZZZzzzzz" << std::endl;
}

 std::string WrongAnimal::getType() const
{
    return _type;
}

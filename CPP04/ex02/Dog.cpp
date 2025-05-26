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
    _brain = new Brain(*other._brain);
    _type = other._type;
}
Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        delete _brain;
        _brain = new Brain(*other._brain);
        _type = other._type;
    }
    return *this;
}

void Dog::makeSound() const
{
        std::cout << "Woof Woof!!" << std::endl;
}

void Dog::setDogIdea(std::string idea, int n)
{
    _brain->setIdeas(idea, n);
}

void Dog::getDogIdea(int n)
{
    _brain->getIdeas(n);
}
#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "Default FragTrap constructor called" << std::endl;
    _name = "Default FragTrap";
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor FragTrap called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "Default FragTrap constructor called" << std::endl;
    _name = name;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    _name = other._name;
    _hitPoints = other._hitPoints;
    _energyPoints = other._energyPoints;
    _attackDamage = other._attackDamage;
    std::cout << "FragTrap Copy constructor called" << std::endl;
}
FragTrap& FragTrap::operator=(const FragTrap& other)
{
    std::cout << "FragTrap Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    return *this;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _name << " gives a positive high fives!" << std::endl;
}
std::string FragTrap::getName()
{
    return _name;
}
void FragTrap::setName(std::string newName)
{
    _name = newName;
}

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default")
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
: _hitPoints(other._hitPoints),
      _energyPoints(other._energyPoints),
      _attackDamage(other._attackDamage),
      _name(other._name)
{
    std::cout << "Copy constructor called" << std::endl;
}
ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    return *this;
}


void ClapTrap::attack(const std::string& target)
{
    if (_energyPoints > 0)
    {
        std::cout << "ClapTrap " << _name << " attacks " << target << " causing "<< _attackDamage << " points of damage!" << std::endl;
        _energyPoints -= 1;
    }
    else
        std::cout << "ClapTrap " << _name << " has no energy left " << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    _hitPoints -= amount;
}
void ClapTrap::beRepaired(unsigned int amount)
{

    if (_energyPoints > 0)
    {
        std::cout << "ClapTrap " << _name << " gets " << amount << " hit points back!" << std::endl;
        _energyPoints -= 1;
        _hitPoints += amount;
    }
    else
        std::cout << "ClapTrap " << _name << " has no energy left " << std::endl;
}

std::string ClapTrap::getName()
{
    return _name;
}
void ClapTrap::setName(std::string newName)
{
    _name = newName;
}
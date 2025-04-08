#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "Default Scavtrap constructor called" << std::endl;
    _name = "Default Scavtrap";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "Default ScavTrap constructor called" << std::endl;
    _name = name;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    std::cout << "ScavtTrap Copy constructor called" << std::endl;
    _name = other._name;
    _hitPoints = other._hitPoints;
    _energyPoints = other._energyPoints;
    _attackDamage = other._attackDamage;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    std::cout << "ScavTrap Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    return *this;
}

void ScavTrap::attack(const std::string& target)
{
    if (_energyPoints > 0)
    {
        std::cout << "ScavTrap " << _name << " attacks " << target << " causing "<< _attackDamage << " points of damage!" << std::endl;
        _energyPoints -= 1;
    }
    else
        std::cout << "ScavTrap " << _name << " has no energy left " << std::endl;
}

void ScavTrap::guardGate()
{

    std::cout << "ScavTrap " << _name << " is in Gate keeper mode" << std::endl;
}
std::string ScavTrap::getName()
{
    return _name;
}
void ScavTrap::setName(std::string newName)
{
    _name = newName;
}

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
    std::cout << "Copy constructor called" << std::endl;
}
ScavTrap& ScavTrap::operator=(const ScavTrap& op)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &op)
    {
        _name = op._name;
        _hitPoints = op._hitPoints;
        _energyPoints = op._energyPoints;
        _attackDamage = op._attackDamage;
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

#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap kero("kero");
    ScavTrap pedro("pedro");
    ScavTrap Op;
    ScavTrap cpy(pedro);

    std::cout << "---------------------" << std::endl;
    kero.attack(pedro.getName());
    std::cout << "---------------------" << std::endl;
    pedro.takeDamage(20);
    std::cout << "---------------------" << std::endl;
    Op.beRepaired(2);
    std::cout << "---------------------" << std::endl;
    cpy.attack("God");
    std::cout << "---------------------" << std::endl;
    kero.guardGate();
    std::cout << "---------------------" << std::endl;
    return 0;
}

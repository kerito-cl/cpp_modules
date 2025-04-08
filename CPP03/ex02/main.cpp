#include "FragTrap.hpp"

int main(void)
{
    FragTrap kero("kero");
    FragTrap pedro("pedro");
    FragTrap Op;
    FragTrap cpy(pedro);

    std::cout << "---------------------" << std::endl;
    kero.attack(pedro.getName());
    std::cout << "---------------------" << std::endl;
    pedro.takeDamage(0);
    std::cout << "---------------------" << std::endl;
    Op.beRepaired(2);
    std::cout << "---------------------" << std::endl;
    cpy.attack("God");
    std::cout << "---------------------" << std::endl;
    kero.highFivesGuys();
    std::cout << "---------------------" << std::endl;
    return 0;
}

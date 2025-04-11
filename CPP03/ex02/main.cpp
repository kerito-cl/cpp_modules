#include "FragTrap.hpp"

int main(void)
{
    FragTrap kero("Kero");
    FragTrap pedro("Pedro");
    FragTrap Op;
    FragTrap cpy(kero);

    Op = pedro;
    std::cout << "---------------------" << std::endl;
    kero.attack(pedro.getName());
    std::cout << "---------------------" << std::endl;
    pedro.takeDamage(30);
    std::cout << "---------------------" << std::endl;
    Op.beRepaired(2);
    std::cout << "---------------------" << std::endl;
    cpy.attack("God");
    std::cout << "---------------------" << std::endl;
    kero.highFivesGuys();
    std::cout << "---------------------" << std::endl;
    return 0;
}

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap kero("kero");
    ClapTrap pedro("pedro");
    ClapTrap Op;
    ClapTrap cpy(pedro);

    kero.attack(pedro.getName());
    pedro.takeDamage(0);
    Op.beRepaired(2);
    cpy.attack("God");


    return 0;
}

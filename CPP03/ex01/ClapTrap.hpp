#include <iostream>

class ClapTrap
{
    protected:
        int _hitPoints = 10;
        int _energyPoints = 10;
        int _attackDamage = 0;
        std::string _name;

    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& other);
        ClapTrap& operator=(const ClapTrap& other);
        ~ClapTrap();

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string getName();
        void setName(std::string newName);
};


#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
    public:
        DiamondTrap(std::string Name);
        ~DiamondTrap();
        void whoAmI();
    private:
        std::string _Name;
};

#endif
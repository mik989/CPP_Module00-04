#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
int main()
{
    DiamondTrap DiamondTrap("DiamondTrappino");
    
    DiamondTrap.attack("target");
    DiamondTrap.takeDamage(11);
    DiamondTrap.beRepaired(10);
    DiamondTrap.highFivesGuys();
    DiamondTrap.whoAmI();
    DiamondTrap.guardGate();
    DiamondTrap.guardGate();
    DiamondTrap.guardGate();
    return 0;
}
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap scavtrap("Scavtrappino");
    scavtrap.attack("target");
    scavtrap.takeDamage(11);
    scavtrap.beRepaired(10);
    scavtrap.guardGate();
    scavtrap.guardGate();
    scavtrap.guardGate();
    return 0;
}
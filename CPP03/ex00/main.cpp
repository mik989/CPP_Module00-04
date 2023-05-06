#include "ClapTrap.hpp"

int main()
{
    ClapTrap claptrap("Claptrappino");
    claptrap.attack("target");
    claptrap.takeDamage(11);
    claptrap.beRepaired(10);
    return 0;
}
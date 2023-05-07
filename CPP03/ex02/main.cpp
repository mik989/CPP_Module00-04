#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap FragTrap("FragTrappino");
    FragTrap.attack("target");
    FragTrap.takeDamage(11);
    FragTrap.beRepaired(10);
    FragTrap.highFivesGuys();
    return 0;
}
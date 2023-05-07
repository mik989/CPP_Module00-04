#include "FragTrap.hpp"

FragTrap::FragTrap(std::string Name): ClapTrap(Name)
{
    std::cout << "FragTrap Constructor called 🛠️" << std::endl;
    this->_HitPoint = 100;
    this->_enPoint = 100;
    this->_attk = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called 🗑️" << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap high fives everybody! 👏" << std::endl;
}
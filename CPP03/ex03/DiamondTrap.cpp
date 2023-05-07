#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string Name) : ClapTrap(Name), ScavTrap(Name), FragTrap(Name)
{
    this->_Name = Name;
    this->ClapTrap::_Name = Name + "_clap_name";
    this->_HitPoint = FragTrap::_HitPoint;
    this->_enPoint = ScavTrap::_enPoint;
    this->_attk = FragTrap::_attk;
    std::cout << "DiamondTrap Constructor called 🛠️" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
  std::cout << "DiamondTrap Destructor called 🗑️" << std::endl;
}

void    DiamondTrap::whoAmI()
{
    std::cout << "My name is: " << this->_Name << std::endl;
    std::cout << "ClapTrap name is: " << this->ClapTrap::_Name << std::endl;
}
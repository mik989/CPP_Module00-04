#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name)
{
    std::cout << "ScavTrap Constructor called" << std::endl;
    this->_attk = 20;
    this->_HitPoint = 100;
    this->_enPoint = 50;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
    if(this->_guard == 0)
    {
        std::cout << "ScavTrap " << this->_Name << " has entered in Gate keeper mode" << std::endl;
        this->_guard = 1;
    }
    else
    {
        std::cout << "ScavTrap " << this->_Name << " has exit from Gate keeper mode" << std::endl;
        this->_guard = 0;
    }
}
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name)
{
    std::cout << "ScavTrap Constructor called 🛠️" << std::endl;
    this->_attk = 20;
    this->_HitPoint = 100;
    this->_enPoint = 50;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called 🗑️" << std::endl;
}

void ScavTrap::guardGate()
{
    if(this->_guard == 0)
    {
        std::cout << "ScavTrap " << this->_Name << " has entered in Gate keeper mode 🛡️" << std::endl;
        this->_guard = 1;
    }
    else
    {
        std::cout << "ScavTrap " << this->_Name << " has exited from Gate keeper mode 😬" << std::endl;
        this->_guard = 0;
    }
}

void ScavTrap::attack(const std::string& target)
{
    if(this->_enPoint > 0)
    {
        this->_enPoint -= 1;
        std::cout << "ScavTrap " << this->_Name << " attack 💥" << target << " causing " << this->_attk << " points of damage! 💥💥" << std::endl;
        std::cout << "ScavTrap " << this->_Name << " has " << this->_enPoint << " energy left ⚡" << std::endl;

    }
    else
    {
        std::cout << "ScavTrap " << this->_Name << " has no energy 🪫" << std::endl;
    }
}
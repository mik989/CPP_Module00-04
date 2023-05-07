#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string Name) : _Name(Name)
{
    std::cout << "ClapTrap Constructor called 🛠️" << std::endl;
}


ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called 🗑️" << std::endl;
}


void ClapTrap::attack(const std::string& target)
{
    if(this->_enPoint > 0)
    {
        this->_enPoint -= 1;
        std::cout << "ClapTrap " << this->_Name << " attack 💥" << target << " causing " << this->_attk << " points of damage! 💥💥" << std::endl;
        std::cout << "ClapTrap " << this->_Name << " has " << this->_enPoint << " energy left ⚡" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << this->_Name << " has no energy 🪫" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->_HitPoint -= amount;

    if(this->_HitPoint <= 0)
    {
        this->_HitPoint = 0;   
        std::cout << "ClapTrap " << this->_Name << " is dead ☠️" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << this->_Name << " take " << amount << " damage 💥" << std::endl;
        std::cout << "ClapTrap " << this->_Name << " has " << this->_HitPoint << " hit points left 🔋" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(_HitPoint <= 0)
    {
        std::cout << "ClapTrap " << this->_Name << " is dead ☠️, can't repair this! :P" << std::endl;
        return;
    }
    if(this->_enPoint > 0)
    {
        this->_enPoint -= 1;
        this->_HitPoint += amount;
        std::cout << "ClapTrap " << this->_Name << " has been repaired 🩹" << amount << " hit points 🔋" << std::endl;
        std::cout << "ClapTrap " << this->_Name << " has " << this->_HitPoint << " hit points left 🔋" << std::endl;
        std::cout << "ClapTrap " << this->_Name << " has " << this->_enPoint << " energy left ⚡" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << this->_Name << " has no energy 🪫" << std::endl;
    }

}

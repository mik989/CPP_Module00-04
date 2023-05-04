#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{  
    this->_humanBname = name;
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon& setWeapon)
{
    _Weapon = &setWeapon;
}

void HumanB::attack()
{
    std::cout << _humanBname << " attacks with their " << _Weapon->getType() << std::endl;
}
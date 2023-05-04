#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _Weapon(weapon)
{
    this->_humanAname = name;
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
    std::cout << _humanAname << " attacks with their " << this->_Weapon.getType() << std::endl;
}
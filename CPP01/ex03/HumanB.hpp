#ifndef HUMANB_HPP
# define HUMANB_HPP
#include "Weapon.hpp"

class HumanB
{
    public:
        HumanB(std::string name);
        ~HumanB();
        void setWeapon(Weapon& setWeapon);
        void attack();
    private:
        std::string _humanBname;
        Weapon* _Weapon;
};

#endif
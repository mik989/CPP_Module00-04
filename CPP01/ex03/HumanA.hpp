#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <iostream>
# include <string>
# include <iomanip>
#include "Weapon.hpp"

class HumanA
{
    public:
        HumanA(std::string name, Weapon& Weapon);
        ~HumanA();        
        void attack();
    private:
        std::string _humanAname;
        Weapon& _Weapon;
};

#endif
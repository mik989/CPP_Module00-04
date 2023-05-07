#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <iomanip>
#include <string>

class ClapTrap
{
    public:
        ClapTrap(std::string Name);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
    protected:
        std::string _Name;
        int _HitPoint = 10;
        int _enPoint = 10;
        int _attk = 0;
};

#endif
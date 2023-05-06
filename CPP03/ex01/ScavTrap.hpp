#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(std::string Name);
        ~ScavTrap();
        void guardGate();
    private:
        int _guard = 0;
};

#endif
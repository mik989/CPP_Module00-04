#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(std::string Name);
        ~ScavTrap();
        void attack(const std::string& target);
        void guardGate();
    private:
        int _guard = 0;
};

#endif
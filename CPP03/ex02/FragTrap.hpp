#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class FragTrap: public ClapTrap
{
    public:
        FragTrap(std::string Name);
        ~FragTrap();
        void highFivesGuys(void);
};

#endif
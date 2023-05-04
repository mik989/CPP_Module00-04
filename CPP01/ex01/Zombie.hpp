#include <iostream>
#include <string>
#include <iomanip>

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

class Zombie
{
    public:
        Zombie();
        ~Zombie();
        void announce( void );
        void setName(std::string name);
    private:
        std::string _name;
};

Zombie* zombieHorde(int N, std::string name);

#endif
#include <iostream>
#include <string>
#include <iomanip>

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

class Zombie
{
    public:
        Zombie(std::string name);
        ~Zombie();
        void announce( void );
    private:
        std::string _name;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );


#endif
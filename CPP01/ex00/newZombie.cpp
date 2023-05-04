#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie* newHordeZombie = new Zombie(name);
    return(newHordeZombie);
}
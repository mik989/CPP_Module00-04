#include "Zombie.hpp"

int main ()
{
    Zombie* Zombie = newZombie("pippo");
    randomChump("paperino");

    delete Zombie;
}
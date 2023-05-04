#include "Zombie.hpp"

int main ()
{
    int j; 
    j = 0;
    std::string str;
    std::string name;
    while(1)
    {
        std::cout << "Inserisci il numero di Zombie che vuoi creare: ";
        std::cin >> str;
        try
        {
            std::stoi(str);
        }
        catch(const std::out_of_range& e)
        {
            std::cout << "Non e' un numero ritenta... ";
            continue;
        }
        catch(const std::invalid_argument& e)
        {
            std::cout << "Non e' un numero ritenta... ";
            continue;
        }
        break;
    }
    j = std::stoi(str);
    std::cout << "Inserisci il nome dell'Horda: ";
    std::cin >> name;
    Zombie* Zombie = zombieHorde(j, name);
    delete[] Zombie;
    
}
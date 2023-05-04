#include "Harl.hpp"

int main()
{
    Harl harl;
    std::cout << "Enter complain level(DEBUG, INFO, WARNING or ERROR): ";
    std::string level;
    std::cin >> level;

    harl.complain(level);
    return 0;
}

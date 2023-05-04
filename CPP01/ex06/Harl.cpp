#include "Harl.hpp"

Harl::Harl()
{
}
Harl::~Harl()
{
}
void Harl::complain(std::string level)
{
    void (Harl::*f[4])(void) = 
    {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

    switch (level[0])
    {
    case 'D':
        (this->*f[0])();
        (this->*f[1])();
        (this->*f[2])();
        (this->*f[3])();
        break;
    case 'I':
        (this->*f[1])();
        (this->*f[2])();
        (this->*f[3])();
        break;
    case 'W':
        (this->*f[2])();
        (this->*f[3])();
        break;
    case 'E':
        (this->*f[3])();
        break;    
    default:
        break;
    }
   
}

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}
void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
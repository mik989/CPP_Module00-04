#include "Animal.hpp"
#include "cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat() 
{
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const 
{
    std::cout << "Meow!" << std::endl;
}

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat() 
{
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const 
{
    std::cout << "WrongMeow!" << std::endl;
}
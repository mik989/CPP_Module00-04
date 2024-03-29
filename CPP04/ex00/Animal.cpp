#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor called" << std::endl;
    this->type = "Rohho";
}

Animal::~Animal() 
{
    std::cout << "Animal destructor called" << std::endl;
   // delete this;
}

std::string Animal::getType() const 
{
    return type;
}

void Animal::makeSound() const
{
    std::cout << "Rohho sound" << std::endl;
}

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal constructor called" << std::endl;
    this->type = "WrongRohho";
}

WrongAnimal::~WrongAnimal() 
{
    std::cout << "WrongAnimal destructor called" << std::endl;
   // delete this;
}

std::string WrongAnimal::getType() const 
{
    return type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongRohho sound" << std::endl;
}


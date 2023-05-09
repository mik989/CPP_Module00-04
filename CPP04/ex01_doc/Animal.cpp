#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor called" << std::endl;
    this->type = "Rohho";
}
Animal::Animal(const Animal & ani)
{
    std::cout << "Animal copy constructor called" << std::endl;
    this->type = ani.type;
}

Animal::~Animal() 
{
    std::cout << "Animal destructor called" << std::endl;
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
}

std::string WrongAnimal::getType() const 
{
    return type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongRohho sound" << std::endl;
}

const Animal & Animal::operator=(Animal const &anim)
{
    this->type = anim.getType();
    return (*this);
}



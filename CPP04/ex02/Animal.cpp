#include "Animal.hpp"

AAnimal::AAnimal()
{
    std::cout << "Animal constructor called" << std::endl;
    this->type = "Rohho";
}
AAnimal::AAnimal(const AAnimal & ani)
{
    std::cout << "Animal copy constructor called" << std::endl;
    this->type = ani.type;
}

AAnimal::~AAnimal() 
{
    std::cout << "Animal destructor called" << std::endl;
}

std::string AAnimal::getType() const 
{
    return type;
}

void AAnimal::makeSound() const
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

const AAnimal & AAnimal::operator=(AAnimal const &anim)
{
    this->type = anim.getType();
    return (*this);
}



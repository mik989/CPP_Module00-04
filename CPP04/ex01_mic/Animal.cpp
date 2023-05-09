#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor called" << std::endl;
    this->type = "Rohho";
}

Animal::Animal(Animal const & animal)
{
	this->type = animal.type;
	std::cout << "Animal was constructed from a copy\n";
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

Animal & Animal::operator=(Animal const &animal)
{
    std::cout << "Sono in Animal" << std::endl;
    this->type = animal.type;
	return (*this);
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


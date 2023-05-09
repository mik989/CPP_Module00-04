#include "Animal.hpp"
#include "dog.hpp"

Dog::Dog() 
{
    this->type = "Dog";
    this->_brain = new Brain;
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(Dog & dog)
{
	this->type = dog.getType();
	this->_brain = new Brain(*(dog._brain));
	std::cout << "COPY CONSTRUCTOR\n";
}

Dog::~Dog() 
{
    std::cout << "Dog destructor called" << std::endl;
    delete this->_brain;
}

void Dog::makeSound() const 
{
    std::cout << "Bau!" << std::endl;
}

Dog &Dog::operator=(Dog const &dog)
{
    std::cout << "COPY OVERLOAD" << std::endl;
    this->type = dog.type;
    this->_brain = dog._brain;
	return (*this);
}

WrongDog::WrongDog() 
{
    this->type = "WrongDog";
    std::cout << "WrongDog constructor called" << std::endl;
}

WrongDog::~WrongDog() 
{
    std::cout << "WrongDog destructor called" << std::endl;
    //delete this;
}

void WrongDog::makeSound() const 
{
    std::cout << "WrongBau!" << std::endl;
}
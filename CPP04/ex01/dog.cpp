#include "Animal.hpp"
#include "dog.hpp"

Dog::Dog() 
{
    this->type = "Dog";
    _brain = new Brain;
    std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog() 
{
    std::cout << "Dog destructor called" << std::endl;
    delete _brain;
   // delete this;
}

void Dog::makeSound() const 
{
    std::cout << "Bau!" << std::endl;
}

Dog& Dog::operator=(const Dog &dog)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->type = dog.getType();
    return *this;
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
#include "Animal.hpp"
#include "dog.hpp"

Dog::Dog() 
{
    this->type = "Dog";
    Brain *_brain = new Brain;
    std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog() 
{
    std::cout << "Dog destructor called" << std::endl;
    delete [] _brain;
   // delete this;
}

void Dog::makeSound() const 
{
    std::cout << "Bau!" << std::endl;
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
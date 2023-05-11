#include "Animal.hpp"
#include "dog.hpp"

Dog::Dog() 
{
    this->type = "Dog";
    _brain = new Brain;
    std::cout << "Dog constructor called" << std::endl;
}
Dog::Dog(Dog &doggo) 
{
    this->type = "Dog";
    _brain = new Brain(*(doggo._brain));
    std::cout << "Dog constructor copy called" << std::endl;
}

Dog::~Dog() 
{
    std::cout << "Dog destructor called" << std::endl;
    delete _brain;
}

void Dog::makeSound() const 
{
    std::cout << "Bau!" << std::endl;
}
const Dog & Dog::operator=(const Dog &godcane)
{
    this->type = godcane.getType();
    this->_brain = godcane._brain;
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
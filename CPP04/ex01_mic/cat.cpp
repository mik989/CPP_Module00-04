#include "Animal.hpp"
#include "cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    this->_brain = new Brain;
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(Cat & cat)
{
	this->type = cat.getType();
	this->_brain = new Brain(*(cat._brain));
	std::cout << "COPY CONSTRUCTOR\n";
}

Cat::~Cat() 
{
    std::cout << "Cat destructor called" << std::endl;
    delete this->_brain;
}

void Cat::makeSound() const 
{
    std::cout << "Meow!" << std::endl;
}

Cat &Cat::operator=(Cat const &cat)
{
    std::cout << "COPY OVERLOAD" << std::endl;
    this->type = cat.type;
    this->_brain = cat._brain;
	return (*this);
}

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat() 
{
    std::cout << "WrongCat destructor called" << std::endl;
   // delete this;
}

void WrongCat::makeSound() const 
{
    std::cout << "WrongMeow!" << std::endl;
}
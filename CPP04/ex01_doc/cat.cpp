#include "Animal.hpp"
#include "cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    _brain = new Brain;
    std::cout << "Cat constructor called" << std::endl;
}
Cat::Cat(Cat &catt)
{
    this->type = catt.type,
    _brain = new Brain(*(catt._brain));
    std::cout << "Cat constructor copy called" << std::endl;
}
Cat::~Cat() 
{
    std::cout << "Cat destructor called" << std::endl;
<<<<<<< HEAD
    delete _brain;
=======
   delete _brain;
   // delete this;
>>>>>>> bd37b4ffc079eb9dfc5068110dd7136536c7bfa0
}

const Cat & Cat::operator=(const Cat &godgatto)
{
    this->type = godgatto.getType();
    this->_brain = godgatto._brain;
    return (*this);
}


void Cat::makeSound() const 
{
    std::cout << "Meow!" << std::endl;
}

Cat& Cat::operator=(const Cat &cat)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->type = cat.getType();
    return *this;
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
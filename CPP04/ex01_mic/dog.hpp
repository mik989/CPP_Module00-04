#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    public:
        Dog();
        virtual ~Dog();
        Dog(Dog & dog);
        virtual void makeSound() const;
        Dog &operator=(Dog const &dog);
    private:
        Brain * _brain;
};

class WrongDog : public WrongAnimal
{
    public:
        WrongDog();
        ~WrongDog();
        void makeSound() const;
};

#endif
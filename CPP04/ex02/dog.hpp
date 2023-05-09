#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
    public:
        Dog();
        Dog(Dog &doggo);
        virtual ~Dog();
        virtual void makeSound() const;
        const Dog &operator=(const Dog &godcane);
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
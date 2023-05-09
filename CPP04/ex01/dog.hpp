#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(Dog &doggo);
        virtual ~Dog();
        virtual void makeSound() const;
<<<<<<< HEAD
        const Dog &operator=(const Dog &godcane);
=======
        Dog &operator=(const Dog &dog);
>>>>>>> bd37b4ffc079eb9dfc5068110dd7136536c7bfa0
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
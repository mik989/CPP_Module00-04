#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Brain.hpp"

class Animal
{
    public:

        Animal();
        virtual ~Animal();
        std::string getType() const;
        virtual void makeSound() const;

    protected:
        std::string type;
};

class WrongAnimal
{
    public:

        WrongAnimal();
        ~WrongAnimal();
        std::string getType() const;
        void makeSound() const;

    protected:
        std::string type;
};

#endif
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
        Animal(const Animal & animal);
        std::string getType() const;
        virtual void makeSound() const;
        Animal &operator=(Animal const &animal);

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
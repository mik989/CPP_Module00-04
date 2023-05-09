#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Brain.hpp"

class AAnimal
{
    public:

        AAnimal();
        AAnimal(const AAnimal & ani);
        virtual ~AAnimal();
        std::string getType() const;
        const AAnimal & operator=(AAnimal const &anim);
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
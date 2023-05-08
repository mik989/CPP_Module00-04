#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal 
{
    public:
        Cat();
        virtual ~Cat();
        virtual void makeSound() const;
};

class WrongCat : public WrongAnimal 
{
    public:
         WrongCat();
        ~WrongCat();
        void makeSound() const;
};

#endif
#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal 
{
    public:
        Cat();
        ~Cat();
        Cat(Cat & cat);
        virtual void makeSound() const;
        Cat &operator=(Cat const &cat);
    private:
        Brain *_brain;
};

class WrongCat : public WrongAnimal 
{
    public:
        WrongCat();
        ~WrongCat();
        void makeSound() const;
};

#endif
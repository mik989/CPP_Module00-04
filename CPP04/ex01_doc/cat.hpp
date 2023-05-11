#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal 
{
    public:
        Cat();
        Cat(Cat &catt);
        virtual ~Cat();
        virtual void makeSound() const;
        const Cat &operator=(const Cat &godgatto);
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
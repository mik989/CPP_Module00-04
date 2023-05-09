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
<<<<<<< HEAD
        const Cat &operator=(const Cat &godgatto);
=======
        Cat &operator=(const Cat &cat);
>>>>>>> bd37b4ffc079eb9dfc5068110dd7136536c7bfa0
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
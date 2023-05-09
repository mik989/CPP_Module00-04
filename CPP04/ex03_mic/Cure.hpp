#ifndef CURE_HPP
#define CURE_HPP

#include "Amateria.hpp"
#include "ICharacter.hpp"
#include <string>
#include <iomanip>
#include <iostream>

class Cure : public AMateria
{
    public:
        Cure();
        ~Cure();
        Cure(Cure const & ref);
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
    private:
        std::string _type;
};

#endif
#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"

#include <string>
#include <iomanip>
#include <iostream>

class ICharacter;

class AMateria
{
    public:
        AMateria();
        virtual ~AMateria();
        AMateria(std::string const & type);
        AMateria(AMateria const & ref);
        std::string const & getType() const; //Returns the materia type
        AMateria &operator=(AMateria const & ref);
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target) = 0;
    protected:
        std::string _type;
};

std::ostream & operator<<(std::ostream & o, AMateria const & i);

#endif
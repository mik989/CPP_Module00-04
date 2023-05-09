#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iomanip>
#include <iostream>
#include <ICharacter.hpp>
#include <IMateriaSource.hpp>

class AMateria
{
    public:
        AMateria(std::string const & type);
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target) = 0;
    protected:
        std::string _type;
};
#endif
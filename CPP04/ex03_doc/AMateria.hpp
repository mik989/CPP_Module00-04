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
        ~AMateria();
        AMateria(std::string const & type);
        // copy constructor
        AMateria(const AMateria& copy);
        // operator = override
		AMateria &operator=(AMateria const& mat);
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target) = 0;
    protected:
       std::string _type;
};

#endif
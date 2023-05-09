#ifndef ICE_HPP
#define ICE_HPP

#include "Amateria.hpp"
#include "ICharacter.hpp"
#include <string>
#include <iomanip>
#include <iostream>

class Ice : public AMateria
{
    public:
        Ice();
        ~Ice();
        Ice(Ice const & ref);
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
    private:
        std::string _type;
};

#endif
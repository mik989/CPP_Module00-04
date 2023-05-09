#ifndef ICE_HPP
#define ICE_HPP

#include "Amateria.hpp"


class ice : public AMateria
{
    public:
        ice();
        ~ice();
        ice(ice const & ref)
        ice &operator=(ice const & ref);
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
}

#endif
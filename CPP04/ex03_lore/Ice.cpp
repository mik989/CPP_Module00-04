#include "Ice.hpp"
#include "Amateria.hpp"

Ice::Ice(): AMateria("ice")
{
    std::cout << "Costruisco il Ghiaccio" << std::endl;
}

Ice::~Ice()
{
    std::cout << "Distruggo il Ghiaccio" << std::endl;
}

Ice::Ice(Ice const & ref): AMateria("ice")
{
    std::cout << "Copio il Ghiaccio" << std::endl;
    *this = ref;
}

AMateria* Ice::clone() const
{
    Ice *NewIce = new Ice;
    return(NewIce);   
}

void Ice::use(ICharacter& target)
{
   std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
}


#include "Cure.hpp"
#include "Amateria.hpp"

Cure::Cure()
{
    std::cout << "Costruisco il Ghiaccio" << std::endl;
}

Cure::~Cure()
{
    std::cout << "Distruggo il Ghiaccio" << std::endl;
}

Cure::Cure(Cure const & ref)
{
    std::cout << "Copio il Ghiaccio" << std::endl;
    *this = ref;
}

AMateria* Cure::clone() const
{
    Cure *NewCure = new Cure;
    return(NewCure);   
}

void Cure::use(ICharacter& target)
{
   std::cout << "* shoots an Cure bolt at " << target.getName() << "*" << std::endl;
}


#include "Cure.hpp"
#include "Amateria.hpp"

Cure::Cure(): AMateria("cure")
{
    std::cout << "Costruisco la cura" << std::endl;
}

Cure::~Cure()
{
    std::cout << "Distruggo la cura" << std::endl;
}

Cure::Cure(Cure const & ref) : AMateria("cure")
{
    std::cout << "Copio la cura" << std::endl;
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


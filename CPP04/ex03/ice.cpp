#include "ice.hpp"

ice::ice()
{
    std::cout << "Costruisco il Ghiaccio" << std::endl
}

ice::~ice()
{
    std::cout << "Distruggo il Ghiaccio" << std::endl
}

ice::ice(ice const & ref)
{
    std::cout << "Copio il Ghiaccio" << std::endl
    *this = ref;
}

AMateria* ice::clone() const
{
    ice *NewIce = new ice;
    return(NewIce);   
}

void ice::use(ICharacter& target)
{
   std::cout << "* shoots an ice bolt at " << target << "*" << std::endl;
}

ice & ice::operator=(ice const & ref)
{
    if(this != &ref)
        this->_type = ref._type;
    return(*this);

}


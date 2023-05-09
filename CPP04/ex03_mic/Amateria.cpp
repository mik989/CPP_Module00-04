#include "Amateria.hpp"


AMateria::AMateria()
{
    std::cout << "Costruttore AMATERIA" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
    std::cout << "Costruttore AMATERIA" << std::endl;
}

std::string const& AMateria::getType() const
{
    return(this->_type);
}

AMateria & AMateria::operator=(AMateria const & ref)
{
    if(this != &ref)
        this->_type = ref.getType();
    return(*this);
}
#include "Amateria.hpp"


AMateria::AMateria(std::string const & type) : _type(type)
{
    std::cout << "Costruttore AMATERIA" << std::endl;
}

std::string const& AMateria::getType() const
{
    return(this->_type)
}

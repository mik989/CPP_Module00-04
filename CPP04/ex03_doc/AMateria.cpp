#include "AMateria.hpp"

AMateria::AMateria()
{
	this->_type = "";
}
AMateria::~AMateria()
{
	
}
AMateria::AMateria(std::string const & type) : _type(type)
{
}

AMateria::AMateria(const AMateria& other)
{
	AMateria::operator=(other);
}
 std::string const & AMateria::getType() const
 {
	return(_type);
 }

 AMateria & AMateria::operator=(AMateria const& mat)
 {
	_type = mat.getType();
	return (*this);
 }
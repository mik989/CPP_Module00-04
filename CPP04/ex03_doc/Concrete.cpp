#include "Concrete.hpp"

Ice::Ice()
{
	this->_type = "ice";
}
Ice::~Ice()
{

}
		//copy constructor
Ice::Ice(Ice const &ghiaccio)
{
	_type = ghiaccio._type;
}
		//operator = override
Ice & Ice::operator=(Ice const& bubbo)
{
	this->_type = bubbo._type;
	return(*this);
}
void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at *" << target.getName() << std::endl;
}

Ice* Ice::clone() const
{
	Ice *icy = new Ice;
	return (icy);
}
//--------------------------------------------------------------//
Cure::Cure()
{
	this->_type = "cure";
}
Cure::~Cure()
{

}


Cure::Cure(Cure const &bho)
{
	_type = bho._type;
}

Cure &Cure::operator=(Cure const& bubbolo)
{
	this->_type = bubbolo._type;
	return(*this);
}
Cure* Cure::clone() const
{
	Cure *cury = new Cure;
	return (cury);
}
void	Cure::use(ICharacter& target)
{
	std::cout << "* heals" << target.getName() << "’s wounds *"  << std::endl;
}
//--------------------------------------------------------------//
std::string const & Character::getName() const
{
	return(_name);
}
Character::Character(std::string Name) :_name(Name)
{
	for (int i = 0; i < 4; i++)
		_nIndex[i] = 0;
}
Character::Character(Character &refn)
{
	_name = refn._name;
	for (int i = 0; i < 4; i++)
		_nIndex[i] = 0;
}

Character & Character::operator=(Character const & reff)
{
	_name = reff._name;
	return (*this);
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if(_nIndex[i] = 0)
		{
			_slots[i] = *m;
			break;
		}
	}
}

void	Character::unequip(int idx)
{
		if(_nIndex[idx] == 1)
		{
			_nIndex[idx] = 0;
		}
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 3 || !this->_nIndex[idx])
		return ;
	_slots[idx].use(target);
}
//--------------------------------------------------------------//
MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_nIndex[i] = 0;
}
MateriaSource::~MateriaSource()
{}
MateriaSource::MateriaSource(const MateriaSource& other)
{
	MateriaSource::operator=(other);
}
MateriaSource & MateriaSource::operator=(const MateriaSource& other)
{
	this->_name = other._name;
	for (int i = 0; i < 4; i++)
		_nIndex[i] = 0;
	return (*this);
}
void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
		{
			if(_nIndex[i] = 0)
			{
				_slots[i] = m;
				break;
			}
		}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	if (type == "ice")
	{
		Ice *icy = new Ice;
		return (icy);
	}
	else if (type == "cure")
	{
		Cure *cury = new Cure;
		return (cury);
	}
	else
		return (0);
}
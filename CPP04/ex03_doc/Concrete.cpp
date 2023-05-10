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
}
		//operator = override
Ice & Ice::operator=(Ice const& bubbo)
{
	this->_type = bubbo._type;
	return(*this);
}
void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *"<< std::endl;
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
	std::cout << "* heals " << target.getName() << "'s wounds *"  << std::endl;
}
//--------------------------------------------------------------//
Character::Character(std::string Name) 
{
	for (int i = 0; i < 4; i++)
	{
		_nIndex[i] = 0;
		_slots[i] = NULL;
	}
	_name = Name;
}
Character::~Character() 
{
	for (int i = 0; i < 4; i++)
	{
		if (_slots[i])
		{
			delete _slots[i];
			_slots[i] = NULL;
		}
	}
}
Character::Character(Character &refn)
{
	Character::operator=(refn);
}

Character & Character::operator=(Character const & reff)
{
	for (int i = 0; i < 4; i++)
	{
		if (_slots[i])
		{
			delete _slots[i];
			_slots[i] = NULL;
		}
		_nIndex[i] = reff._nIndex[i];
		_slots[i] = reff._slots[i]->clone();
	}
	_name = reff._name;
	return (*this);
}

std::string const & Character::getName() const
{
	return(_name);
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_slots[3])
		{
			std::cout << "* Inventory is full *" << std::endl;
			break;
		}	
		if(_nIndex[i] == 0)
		{
			_nIndex[i] = 1;
			if (_slots[i])
				continue;
			else
				_slots[i] = m;
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
	if (idx > 3 || !this->_slots[idx])
		return ;
	if (_nIndex[idx] == 0)
	{
		std::cout << "* Slot unequipped *" << std::endl;
		return ;
	}
	_slots[idx]->use(target);
}
//--------------------------------------------------------------//
MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		_nIndex[i] = 0;
		_slots[i] = NULL;
	}
}
MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (_slots[i])
		{
			delete _slots[i];
			_slots[i] = NULL;
		}
	}
}
MateriaSource::MateriaSource(const MateriaSource& other)
{
	MateriaSource::operator=(other);
}
MateriaSource & MateriaSource::operator=(const MateriaSource& other)
{
	for (int i = 0; i < 4; i++)
	{
		if (_slots[i])
		{
			delete _slots[i];
			_slots[i] = NULL;
		}
		_nIndex[i] = other._nIndex[i];
		_slots[i] = other._slots[i]->clone();
	}
	return (*this);
}
void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if(_nIndex[i] == 0)
		{
			_slots[i] = m;
			_nIndex[i] = 1;
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
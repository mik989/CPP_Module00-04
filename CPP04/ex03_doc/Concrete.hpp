#ifndef CONCRETE_HPP
#define CONCRETE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>
#include <iomanip>
#include <iostream>

class Ice : public AMateria
{
    public:
		Ice();
		~Ice();
		//copy constructor
		Ice(Ice const &ghiaccio);
		//operator = override
		Ice &operator=(Ice const& bubbo);
        Ice* clone() const;
        void use(ICharacter& target);
};

class Cure : public AMateria
{
    public:
		Cure();
		~Cure();
		//copy constructor
		Cure(Cure const &bho);
		//operator = override
		Cure &operator=(Cure const& bubbolo);
        Cure* clone() const;
        void use(ICharacter& target);
};

class Character : public ICharacter
{
	public:
		Character(std::string  Name);
		~Character();
		// Copy constructor
		Character(Character &refn);
		// Operation overload =
		Character & operator=(Character const & reff);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
	private:
		AMateria* _slots[4];
		int	_nIndex[4];
		std::string _name;
};

class MateriaSource : public IMateriaSource
{
    public:
		MateriaSource();
		~MateriaSource();
		// Copy constructor
		MateriaSource(const MateriaSource& copy);
		// Operation overload =
		MateriaSource& operator=(const MateriaSource& copy);
        void learnMateria(AMateria* m);
        virtual AMateria* createMateria(std::string const & type);
	private:
		int	_nIndex[4];
		AMateria* _slots[4];
};


#endif
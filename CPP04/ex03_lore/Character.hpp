#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "Amateria.hpp"
#include "ICharacter.hpp"
#include <string>
#include <iomanip>
#include <iostream>

class Character : public ICharacter
{
    public:
        Character(std::string name);
        Character(Character & ref);
        virtual ~Character();
        Character &operator=(Character const & ref);
        virtual std::string const & getName() const;
        int getNslot(int i) const;
        AMateria* getSlot(int i) const;
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);
    private:
        std::string _name;
        AMateria* _slot[4];
        int _nslot[4];
};

#endif
#include "Character.hpp"

Character::Character(std::string name) : _name(name)
{
    std::cout << "Costruisco il personaggio: " << this->_name <<  std::endl;
    for(int i = 0; i < 4; i++)
        this->_nslot[i] = 0;
}

Character::Character(Character & ref) 
{
    this->_name = ref.getName();
    for(int i = 0; i < 4; i++)
    {
        this->_slot[i] = ref.getSlot(i);
        this->_nslot[i] = ref.getNslot(i);     
    }
}

AMateria* Character::getSlot(int i) const
{
    return this->_slot[i];
}

int Character::getNslot(int i) const
{
    return this->_nslot[i];
}

Character &Character::operator=(Character const & ref)
{
    if(this != &ref)
        this->_name = ref.getName();
    return(*this);
}

Character::~Character()
{
     for(int i = 0; i < 4; i++)
    {
        if (_nslot[i] == 1)
        {
            delete this->_slot[i];
            this->_nslot[i] = 0;
        }        
    }
}

std::string const & Character::getName() const
{
    return this->_name;
}

void Character::equip(AMateria* m)
{
    for(int i = 0; i < 4; i++)
    {
        if (_nslot[i] == 0)
        {
            this->_slot[i] = m;
            this->_nslot[i] = 1;
            break;
        }        
    }
   // std::cout << "Personaggio equipaggiato con: " << m->getType() <<  std::endl;

}

void Character::unequip(int idx)
{
   if (_nslot[idx] == 1)
    {
        this->_slot[idx] = NULL;
        this->_nslot[idx] = 0;
    }  
}

void Character::use(int idx, ICharacter& target)
{
    if(_nslot[idx] == 1)
    {
        this->_slot[idx]->use(target);
    }
}
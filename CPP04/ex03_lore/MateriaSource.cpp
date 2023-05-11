#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout << "costruisco la materiasource " <<  std::endl;
    for(int i = 0; i < 4; i++)
        this->_materia[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    for(int i = 0; i < 4; i++)
    {
        if (this->_materia[i] != NULL)
            delete this->_materia[i];
    }
}

void MateriaSource::learnMateria(AMateria* materia)
{
    for(int i = 0; i < 4; i++)
    {
        if (this->_materia[i] == NULL)
        {
            this->_materia[i] = materia;
            break;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for(int i = 0; i < 4; i++)
    {
        if (this->_materia[i] != NULL && this->_materia[i]->getType() == type)
            return this->_materia[i]->clone();
    }
    return NULL;
}
#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "Amateria.hpp"
#include "IMateriaSource.hpp"
#include <string>
#include <iomanip>
#include <iostream>

class AMateria;

class MateriaSource : public IMateriaSource
{
    public:
        MateriaSource();
        virtual ~MateriaSource();
        virtual void learnMateria(AMateria*);
        virtual AMateria* createMateria(std::string const & type);
    private:
        AMateria *_materia[4];
        int _count;
};

#endif
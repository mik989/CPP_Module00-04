#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"
<<<<<<< HEAD:CPP04/ex03_doc/AMateria.hpp
=======

>>>>>>> b114654ad4d722fe96ce7bb7b237bdbd723f63ed:CPP04/ex03_mic/Amateria.hpp
#include <string>
#include <iomanip>
#include <iostream>

class ICharacter;
<<<<<<< HEAD:CPP04/ex03_doc/AMateria.hpp
=======

>>>>>>> b114654ad4d722fe96ce7bb7b237bdbd723f63ed:CPP04/ex03_mic/Amateria.hpp
class AMateria
{
    public:
        AMateria();
<<<<<<< HEAD:CPP04/ex03_doc/AMateria.hpp
        ~AMateria();
=======
>>>>>>> b114654ad4d722fe96ce7bb7b237bdbd723f63ed:CPP04/ex03_mic/Amateria.hpp
        AMateria(std::string const & type);
        // copy constructor
        AMateria(const AMateria& copy);
        // operator = override
		AMateria &operator=(AMateria const& mat);
        std::string const & getType() const; //Returns the materia type
        AMateria &operator=(AMateria const & ref);
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target) = 0;
    protected:
       std::string _type;
};

#endif
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Concrete.hpp"
#include <string>

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");
    
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);

    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter* bob = new Character("bob");
    //tmp->use(*me);
    me->use(0, *bob);
    me->use(1, *bob);
    
    delete bob;
    delete me;
    delete src;
    //-----------Clone function test------------//
    AMateria *ne = new Ice;
    AMateria *se = new Cure;
    std::cout << "Original type:" << ne->getType() << std::endl;
    AMateria *clon = ne->clone();
    Ice ic;
    Ice pic(ic);
    std::cout << "Clone type:" << ne->getType() << std::endl;
   
    //-----------Use function test -------------//
    Character *mem = new Character("Pippo Mio");
    std::cout << "Character name:" << mem->getName() << std::endl;
    ic.use(*mem);
    pic.use(*mem);
    ne->use(*mem);
    se->use(*mem);
    delete mem;
    delete clon;
    delete ne;
    delete se;
    //-----------Equip /Unequip test ------------//
    Character *test = new Character("Zio Tinello");
    std::cout << "Character name:" << test->getName() << std::endl;
    AMateria *uno = new Ice;
    AMateria *due = new Cure;
    AMateria *tre = new Ice;
    AMateria *quattro = new Cure;
    AMateria *cinque = new Ice;
    test->equip(uno);
    test->equip(due);
    test->equip(tre);
    test->equip(quattro);
    test->equip(due);
    test->unequip(0);
    test->equip(cinque);
    test->use(0, *test);
    test->use(1, *test);
    test->use(2, *test);
    test->use(3, *test);
    Character *test2;
    test2 = test;
   // test->use(4, *test);
    delete test2;
    delete cinque;
    return 0;
}
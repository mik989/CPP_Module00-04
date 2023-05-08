#include "Animal.hpp"
#include "dog.hpp"
#include "cat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << std::endl;
    std::cout << meta->getType() << " " << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    i->makeSound();
    std::cout << std::endl;
    j->makeSound();
    std::cout << std::endl;
    meta->makeSound();
    std::cout << std::endl;
    std::cout << std::endl;

    const WrongAnimal* Wrongmeta = new WrongAnimal();
    const WrongAnimal* Wrongj = new WrongDog();
    const WrongAnimal* Wrongi = new WrongCat();

    std::cout << Wrongj->getType() << " " << std::endl;
    std::cout << std::endl;
    std::cout << Wrongi->getType() << " " << std::endl;
    std::cout << std::endl;
    std::cout << Wrongmeta->getType() << " " << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    Wrongi->makeSound();
    std::cout << std::endl;
    Wrongj->makeSound();
    std::cout << std::endl;
    Wrongmeta->makeSound();
    std::cout << std::endl;

    delete j;
    delete i;
    delete meta;

    delete Wrongmeta;
    delete Wrongj;
    delete Wrongi;

    return 0;
}
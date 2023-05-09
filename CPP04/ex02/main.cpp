#include "Animal.hpp"
#include "dog.hpp"
#include "cat.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    Dog porto;
    Cat pino;

    std::cout << "Type Dog is :" << porto.getType() << std::endl;
    std::cout << "Type Cat is :" << pino.getType() << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    Dog &portoref = porto;
    Cat &pinoref = pino;

    std::cout << "Type Dogref is :" << portoref.getType() << std::endl;
    std::cout << "Type Catref is :" << pinoref.getType() << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    Dog portocopy(porto);
    Cat pinocopy(pino);

    std::cout << "Type Dogcopy is :" << portocopy.getType() << std::endl;
    std::cout << "Type Catcopy is :" << pinocopy.getType() << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    Dog &portocopyref = portocopy;
    Cat &pinocopyref = pinocopy;
    
    std::cout << "Type Dogcopyref is :" << portocopyref.getType() << std::endl;
    std::cout << "Type Catcopyref is :" << pinocopyref.getType() << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    const Animal* farm[50];
    for (int i = 0; i < 50; i++)
    {
        if (i < 25)
            farm[i] = new Dog();
        else
            farm[i] = new Cat();
        std::cout << std::endl;
    }
    delete j;//should not create a leak
    delete i;
    for (int i = 0; i < 50; i++)
            delete farm[i];
    return 0;
}
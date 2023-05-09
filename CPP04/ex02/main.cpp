#include "Animal.hpp"
#include "dog.hpp"
#include "cat.hpp"

int main()
{
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();

    delete j;
    delete i;
    return 0;
}
#include "Animal.hpp"
#include "dog.hpp"
#include "cat.hpp"

int main()
{
const Animal* j = new Dog();
const Animal* i = new Cat();
delete j;//should not create a leak
delete i;

return 0;
}
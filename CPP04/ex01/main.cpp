#include "Animal.hpp"
#include "dog.hpp"
#include "cat.hpp"

int main()
{
    
const Animal* j[10];

for(int i = 0; i < 10; i++)
{
    if (i < 5)
        j[i] = new Cat();
    if (i >= 5)
        j[i] = new Dog();    
}
for(int i = 0; i < 10; i++)
{
    delete j[i];   
}

return 0;
}
#include "Animal.hpp"
#include "dog.hpp"
#include "cat.hpp"

int main()
{
    std::cout << "--- ALLOC NEW SUBCLASSES ---" <<std::endl;
    const Animal* cat = new Cat();
    const Animal* dog = new Dog();
    std::cout << "--- DELETE SUBCLASSES ---" <<std::endl;
    delete cat;
    delete dog;

    std::cout << std::endl;

    std::cout << "--- CAT CALLING... ---" << std::endl;
    Cat fifi;
    std::cout << "...creato il gatto: "<< fifi.getType() << std::endl;
    Cat &fifi_ref = fifi;
    std::cout << "...copiato il gatto con overload: " << fifi_ref.getType() << std::endl;
    Cat fifi_copy(fifi_ref);
    std::cout << "...copiato il gatto con constructor: "<< fifi_copy.getType() << std::endl;
    Cat &fifi_copy_ref = fifi_copy;
    std::cout << "...copiato il gatto con overload: "<< fifi_copy_ref.getType() << std::endl;
    std::cout << "--- END CAT CALLING... ---" <<std::endl;

    std::cout << "--- DOG CALLING... ---" <<std::endl;
    Dog fufu;
    std::cout << "...creato il gatto: "<< fufu.getType() << std::endl;
    Dog &fufu_ref = fufu;
    std::cout << "...copiato il gatto con overload: " << fufu_ref.getType() << std::endl;
    Dog fufu_copy(fufu_ref);
    std::cout << "...copiato il gatto con constructor: "<< fufu_copy.getType() << std::endl;
    Dog &fufu_copy_ref = fufu_copy;
    std::cout << "--- END DOG CALLING... ---" <<std::endl;


    std::cout << "--- CREATE NEW ANIMAL ARRAY ---" <<std::endl;
    const Animal* j[10];

    for(int i = 0; i < 10; i++)
    {
        if (i < 5)
            j[i] = new Cat();
        if (i >= 5)
            j[i] = new Dog();  
    std::cout << std::endl;
    }
    std::cout << "--- DELETE ANIMAL ARRAY ---" <<std::endl;
    for(int i = 0; i < 10; i++)
    {
        delete j[i];   
        std::cout << std::endl;
    }
    std::cout << "--- END DELETE ANIMAL ARRAY ---" <<std::endl;
    return 0;
}
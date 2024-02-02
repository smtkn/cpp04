#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    Animal *animals[10];
    for (int i = 0; i < 10; i++)
    {
        if (i < 5)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }
    Animal j = *(animals[3]);
    for (int i = 0; i < 10; i++)
        animals[i]->makeSound();
    std::cout << std::endl;
    for (int i = 0; i < 10; i++)
        delete animals[i];
    std::cout << std::endl;
    std::cout << j.getType() << std::endl;
    j.makeSound();

    Cat cat1;

    Cat cat2(cat1);



    // DEEP COPY TEST
    Dog* dog1 = new Dog();
    std::cout << "Dog1 brain ideas: " << std::endl;
    for (int i = 0; i < 5; i++)
        dog1->getBrain()->setIdeas(i, "I will kill baha");
    for (int i = 0; i < 5; i++)
        std::cout << dog1->getBrain()->getIdeas(i) << std::endl;
    Dog* dog2 = new Dog(*dog1);
    for (int i = 0; i < 5; i++)
        dog2->getBrain()->setIdeas(i, "I will kill cepni");
    std::cout << "Dog2 brain ideas: " << std::endl;
    for (int i = 0; i < 5; i++)
        std::cout << dog2->getBrain()->getIdeas(i) << std::endl;
    std::cout << "Adress of dog1 brain: "<< dog1->getBrain() << std::endl;
    std::cout << "Adress of dog2 brain: "<< dog2->getBrain() << std::endl;
    delete dog1;
    delete dog2;
    Dog basic;
    {
        Dog tmp = basic;
    }
    std::cout << basic.getType() << std::endl;
}
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    {
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        std::cout << j->getType() << " ";
        j->makeSound();
        std::cout << i->getType() << " ";
        i->makeSound(); 
        meta->makeSound();
        
        delete meta;
        delete j;
        delete i;
    }
    {
        std::cout << std::string(50, '*') <<std::endl;
        const WrongAnimal* meta = new WrongAnimal();
        const WrongAnimal* cat = new WrongCat();

        std::cout << meta->getType() << " ";
        cat->makeSound();
        std::cout << cat->getType() << " ";
        meta->makeSound();
        delete meta;
        delete cat;            
    }
    return 0;
}
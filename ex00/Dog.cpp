#include "Dog.hpp"

Dog::Dog(){
	Animal::type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &copy){
	*this = copy;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &copy){
	this->type = copy.type;
	return(*this);
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const{
	std::cout << "woof woof" << std::endl;
}
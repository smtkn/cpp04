#include "Cat.hpp"

Cat::Cat(){
	Animal::type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &copy){
	*this = copy;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &copy){
	this->type = copy.type;
	return(*this);
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const{
	std::cout << "meawwww" << std::endl;
}
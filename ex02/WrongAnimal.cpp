#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("WrongAnimal"){
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type): type(type){
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy){
	*this = copy;
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy){
	this->type = copy.type;
	return(*this);
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called" << std::endl;
}

std::string WrongAnimal::getType() const{
	return(type);
}

void WrongAnimal::setType(std::string diffType){
	this->type = diffType;
}

void WrongAnimal::makeSound() const{
	std::cout << "No WrongAnimal sounds" << std::endl;
}
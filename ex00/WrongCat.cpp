#include "WrongCat.hpp"

WrongCat::WrongCat(){
	WrongAnimal::type = "WrongCat";
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy){
	*this = copy;
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &copy){
	this->type = copy.type;
	return(*this);
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const{
	std::cout << "meawwww" << std::endl;
}
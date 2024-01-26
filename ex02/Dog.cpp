#include "Dog.hpp"

Dog::Dog(){
	Animal::type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
	this->brain = new Brain();
}

Dog::~Dog() {
    delete brain;
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const{
	std::cout << "woff woff" << std::endl;
}

Dog::Dog(const Dog &copy) {
    this->brain = new Brain(*copy.brain); // Derin kopya
    this->type = copy.type;
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &copy) {
    if (this != &copy) {
        delete this->brain; // Eski brain'i sil
        this->brain = new Brain(*copy.brain); // Yeni brain oluştur
        this->type = copy.type;
    }
    return *this;
}

Brain *Dog::getBrain() const{
	return brain;
}
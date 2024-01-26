#include "Cat.hpp"

Cat::Cat() {
	Animal::type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
	this->brain = new Brain();
}

Cat::~Cat() {
	delete brain;
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "meawwww" << std::endl;
}

Cat::Cat(const Cat &copy) {
    this->brain = new Brain(*copy.brain); // Derin kopya
    this->type = copy.type;
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &copy) {
    if (this != &copy) {
        delete this->brain; // Eski brain'i sil
        *this->brain = *copy.brain; // Yeni brain oluştur
        this->type = copy.type;
    }
    return *this;
}

Brain *Cat::getBrain() const {
	return brain;
}
#include "Cure.hpp"

Cure::Cure(): AMateria("cure") {
    std::cout << "Cure constructor called" << std::endl;
}

Cure::Cure(const Cure& copy) {
    *this = copy;
}
Cure &Cure::operator=(const Cure &copy){
	this->type = copy.getType();
	return *this;
}
std::string const & Cure::getType() const {
    return (this->type);
}
Cure *Cure::clone() const{
	return(new Cure());
}

void Cure::use(ICharacter& target){
	std::cout << "* heals " <<  target.getName() << "\'s wounds *" << std::endl;
}

Cure::~Cure() {
    std::cout << "Cure destructor called" << std::endl;
}

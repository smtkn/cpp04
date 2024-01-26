#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice():AMateria("ice"){
    std::cout << "Ice constructor called" << std::endl;
    
}

Ice::Ice(const Ice& copy) {
    *this = copy;
}

Ice &Ice::operator=(const Ice& copy) {
    this->type = copy.getType();
    return *this;
}

std::string const &Ice::getType() const {
    return (this->type);
}

Ice *Ice::clone() const{
    return(new Ice());
}

void Ice::use(ICharacter& target){
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice() {
    std::cout << "Ice destructor called" << std::endl;
}

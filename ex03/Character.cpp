#include "Character.hpp"

Character::Character(std::string name) : name(name) {
    std::cout << "Character " << name << " created" << std::endl;
    for (int i = 0; i < 4; i++) {
        this->inventory[i] = 0;
    }
}

Character::Character(const Character& copy) {
    *this = copy;
}

Character &Character::operator=(const Character& copy) {
    this->name = copy.getName();
    for (int i = 0; i < 4; i++) {
        if (copy.inventory[i] == 0)
            this->inventory[i] = 0;
        else
            this->inventory[i] = copy.inventory[i]->clone();
    }
    return *this;
}

Character::~Character() {
    for (int i = 0; i < 4; i++) {
        if (this->inventory[i])
            delete this->inventory[i];
    }
    std::cout << "Character " << name << " destructed" << std::endl;
}

std::string const &Character::getName() const {
    return (this->name);
}
void Character::equip(AMateria *m) {
	int i = 0;
	if(!m){
		std::cout << "Sorry meteria is empty" << std::endl;
		return;
	}
	while(i < 4)
	{
		if(inventory[i] == 0){
			this->inventory[i] = m;
    		std::cout << this->getName() << " equip the " << m->getType() << " at slot " << i << std::endl;
			return;
		}
		i++;
	}
	std::cout << "Sorry equip slot full" << std::endl;
}

void Character::unequip(int idx) {
	if(idx > 3)
		std::cout << "Idx is too big" << std::endl;
	else if(idx < 0)
		std::cout << "Idx is too small" << std::endl;
	else{
		if(inventory[idx] == 0)
			std::cout << "There is no Materia" << std::endl;
		else{
			inventory[idx] = 0;
			std::cout << this->getName() << " unequip the " << this->inventory[idx]->getType() << " at slot " << idx << std::endl;
		}
	}
}

void Character::use(int idx, ICharacter& target) {
	if(idx > 3)
		std::cout << "Idx is too big" << std::endl;
	else if(idx < 0)
		std::cout << "Idx is too small" << std::endl;
	else{
		if(inventory[idx] == 0)
			std::cout << "There is no Materia" << std::endl;
		else
			inventory[idx]->use(target);
	}
}
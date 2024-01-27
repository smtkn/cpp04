#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(std::string);
		WrongAnimal(const WrongAnimal &);
		WrongAnimal &operator=(const WrongAnimal &);
		~WrongAnimal();
		std::string getType() const;
		void setType(std::string);
		void makeSound() const;
};

#endif

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal{
	protected:
		std::string type;
	public:
		Animal();
		Animal(std::string);
		Animal(const Animal &);
		Animal &operator=(const Animal &);
		virtual ~Animal();// animal *a = cat a;(vb.)
		std::string getType() const;
		void setType(std::string);
		virtual void makeSound() const;
};

#endif

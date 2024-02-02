/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oolkay <oolkay@42.tr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:17:23 by diogmart          #+#    #+#             */
/*   Updated: 2024/01/27 14:21:32 by oolkay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < MAX_MATERIAS; i++)
		this->materias[i] = NULL;
}
    
MateriaSource::MateriaSource(const MateriaSource& original) {
    for (int i = 0; i < MAX_MATERIAS; i++)
		this->materias[i] = original.materias[i]->clone();
}
    
MateriaSource::~MateriaSource() {
    for (int i = 0; i < MAX_MATERIAS; i++) {
		if (this->materias[i])
			delete this->materias[i];
	}
}
    
MateriaSource& MateriaSource::operator=(const MateriaSource& original) {
    if (this != &original) {
		for (int i = 0; i < MAX_MATERIAS; i++) {
			if (this->materias[i])
				delete this->materias[i];
			this->materias[i] = original.materias[i]->clone();
		}
    }
    return (*this);
}
    
void MateriaSource::learnMateria(AMateria* materia) {
	for (int i = 0; i < MAX_MATERIAS; i++) {
		if (this->materias[i] == NULL) {
			this->materias[i] = materia;
			std::cout << "Materia learned!" << std::endl;
			return ;
		}
	}
	std::cout << "MateriaSource is full!" << std::endl;
}
    
AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < MAX_MATERIAS; i++) {
		if (this->materias[i] && (this->materias[i]->getType() == type)) {
			std::cout << "Materia created!" << std::endl;
			return (this->materias[i]->clone());
		}
	}
	std::cout << "Materia not found!" << std::endl;
	return (NULL);
}
    
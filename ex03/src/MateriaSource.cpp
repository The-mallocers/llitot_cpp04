#include "../inc/MateriaSource.hpp"

MateriaSource::MateriaSource() : _materias() {
	std::cout << MAGENTA << "MateriaSource constructor called" << RESET << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &other) {
	*this = other;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other) {
	std::cout << MAGENTA << "MateriaSource copy operator called" << RESET << std::endl;

   if (this != &other) {
		for (int i = 0; i < 4; i++) {
			if (_materias[i])
                delete _materias[i];
			if (other._materias[i])
				_materias[i] = other._materias[i];
			else
				_materias[i] = NULL;
		}
	}

	return (*this);
}

MateriaSource::~MateriaSource() {
	std::cout << MAGENTA << "MateriaSource destructor called" << RESET << std::endl;
	for (int i = 0; i < 4; i++) {
		delete _materias[i];
	}
}

void MateriaSource::learnMateria(AMateria* materia) {
	for (int i = 0; i < 4; i++) {
		if (!_materias[i]) {
			_materias[i] = materia; 
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (_materias[i] && _materias[i]->getType() == type) {
			return (_materias[i]->clone());
		}
	}
	return (NULL);
}
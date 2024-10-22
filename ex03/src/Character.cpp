#include "../inc/Character.hpp"

Character::Character(const std::string &name) : _name(name) {
	std::cout << MAGENTA << "Character: "<< _name << " constructor called" << RESET << std::endl;
	for (int i = 0;  i < 4; i++) {
		_inventory[i] = NULL;
	}
}

Character::Character(const Character &other) {
	*this = other;
}

Character &Character::operator=(const Character &other) {
    std::cout << MAGENTA << "Character copy constructor called" << RESET << std::endl;

	if (this != &other) {
		_name = other._name;
		for (int i = 0; i < 4; i++) {
			if (_inventory[i])	
                delete _inventory[i];
			if (other._inventory[i])
				_inventory[i] = other._inventory[i];
			else
				_inventory[i] = NULL;
		}
	}

	return (*this);
}

Character::~Character() {
    std::cout << MAGENTA << "Character: "<< _name << " destructor called" << RESET << std::endl;
	for (int i = 0; i < 4; i++)
	if (_inventory[i])
		delete _inventory[i];
}

std::string const & Character::getName() const {
	return (_name);
}

void Character::equip(AMateria* m) {

	if (!m)
		return ;
	for (int i = 0; i < 4; i++) {
		if (!_inventory[i]) {
			std::cout << "equip " << m->getType() << std::endl; 
			_inventory[i] = m;
			return ;
		}
	}
	delete m;
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx < 4) {
		std::cout << "unequip is " << idx << " materia" << std::endl;
		_inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter &target) {
	if (idx >= 0 && idx < 4 && _inventory[idx])
		_inventory[idx]->use(target);
}
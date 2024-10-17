#include "../inc/Dog.hpp"

/* Constructor */
Dog::Dog() {
	std::cout << MAGENTA << "Constructor Dog called" << RESET << std::endl;
	_type = "Dog";
}

/* Copy constructor */
Dog::Dog(const Dog &toCopy) {
	*this = toCopy;
}

/* Member function */
void Dog::makeSound() const{
	std::cout << _type << ": OUAAAAAF !" << std::endl;
}

/* Overload */
Dog &Dog::operator=(const Dog &src) {
	std::cout << MAGENTA << "Dog copy assignment called" << RESET << std::endl;

	if (this != &src) {
		this->_type = src._type;
	}

	return *this;
}

/* Destructor */
Dog::~Dog() {
	std::cout << MAGENTA << "Destructor Dog called" << RESET << std::endl;
}
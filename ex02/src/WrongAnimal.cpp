#include "../inc/WrongAnimal.hpp"

/* Constructor */
WrongAnimal::WrongAnimal() : _type("Default") {
	std::cout << MAGENTA << "Constructor WrongAnimal called" << RESET << std::endl;
}

/* Copy constructor */
WrongAnimal::WrongAnimal(const WrongAnimal &toCopy) {
	*this = toCopy;
}

/* Member function */
void WrongAnimal::makeSound() const{
	std::cout << _type << ": known animal" << std::endl;
}

std::string WrongAnimal::getType() const{
	return _type;
}

/* Overload */
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src) {
	std::cout << MAGENTA << "WrongAnimal copy assignment called" << RESET << std::endl;

	if (this != &src) {
		this->_type = src._type;
	}

	return *this;
}

/* Destructor */
WrongAnimal::~WrongAnimal() {
	std::cout << MAGENTA << "Destructor WrongAnimal called" << RESET << std::endl;
}
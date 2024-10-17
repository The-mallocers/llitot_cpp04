#include "../inc/Cat.hpp"

/* Constructor */
Cat::Cat() {
	std::cout << MAGENTA << "Constructor Cat called" << RESET << std::endl;
	_type = "Cat";
}

/* Copy constructor */
Cat::Cat(const Cat &toCopy) {
	*this = toCopy;
}

/* Member function */
void Cat::makeSound() const{
	std::cout << _type << ": MIAOUUUUU !" << std::endl;
}

/* Overload */
Cat &Cat::operator=(const Cat &src) {
	std::cout << MAGENTA << "Cat copy assignment called" << RESET << std::endl;

	if (this != &src) {
		this->_type = src._type;
	}

	return *this;
}

/* Destructor */
Cat::~Cat() {
	std::cout << MAGENTA << "Destructor Cat called" << RESET << std::endl;
}
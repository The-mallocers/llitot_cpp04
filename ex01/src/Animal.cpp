#include "../inc/Animal.hpp"

/* Constructor */
Animal::Animal() : _type("Default") {
	std::cout << MAGENTA << "Constructor Animal called" << RESET << std::endl;
}


/* Copy constructor */
Animal::Animal(const Animal &toCopy) {
	*this = toCopy;
}


/* Member function */
void Animal::makeSound() {
	std::cout << _type <<": unknown animal" << std::endl;
}

void Animal::makeIdeas(const std::string newIdeas) {
	std::cout << _type << ": can't learn \""<< newIdeas <<"\" because no Brain.." << std::endl;
}

void Animal::sayIdeas() {
	std::cout << _type << ": can't say anything because no Brain.." << std::endl;
}

std::string Animal::getType() const{
	return _type;
}


/* Overload */
Animal &Animal::operator=(const Animal &src) {
	std::cout << MAGENTA << "Animal copy assignment called" << RESET << std::endl;

	if (this != &src) {
		this->_type = src._type;
	}

	return *this;
}

/* Destructor */
Animal::~Animal() {
	std::cout << MAGENTA << "Destructor Animal called" << RESET << std::endl;
}
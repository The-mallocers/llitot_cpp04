#include "../inc/Dog.hpp"
#include "../inc/Brain.hpp"


/* Constructor */
Dog::Dog() {
	std::cout << MAGENTA << "Constructor Dog called" << RESET << std::endl;
	_type = "Dog";
	_brain = new Brain();

}

/* Copy constructor */
Dog::Dog(const Dog &toCopy) {
	*this = toCopy;
}

/* Member function */
void Dog::makeSound() {
	std::cout << _type << ": OUAAAAAF !" << std::endl;
}

void Dog::makeIdeas(const std::string newIdeas) {
	_brain->newIdeas(newIdeas);
}

void Dog::sayIdeas() {
	_brain->printIdeas();
}

/* Overload */
Dog &Dog::operator=(const Dog &src) {
	std::cout << MAGENTA << "Dog copy assignment called" << RESET << std::endl;

	if (this != &src) {

		delete this->_brain;
		this->_brain = new Brain;

		this->_type = src._type;
		*this->_brain = *src._brain; 
	}

	return *this;
}

/* Destructor */
Dog::~Dog() {
	delete _brain;
	std::cout << MAGENTA << "Destructor Dog called" << RESET << std::endl;
}
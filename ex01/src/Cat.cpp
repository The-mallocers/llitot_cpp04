#include "../inc/Cat.hpp"
#include "../inc/Brain.hpp"

/* Constructor */
Cat::Cat() {
	std::cout << MAGENTA << "Constructor Cat called" << RESET << std::endl;
	_type = "Cat";
	_brain = new Brain();
}

/* Copy constructor */
Cat::Cat(const Cat &toCopy) {
	*this = toCopy;
}

/* Member function */
void Cat::makeSound() {
	std::cout << _type << ": MIAOUUUUU !" << std::endl;
}

void Cat::makeIdeas(const std::string newIdeas) {
	_brain->newIdeas(newIdeas);
}

void Cat::sayIdeas() {
	_brain->printIdeas();
}


/* Overload */
Cat &Cat::operator=(const Cat &src) {
	std::cout << MAGENTA << "Cat copy assignment called" << RESET << std::endl;

	if (this != &src) {
		_type = src._type;

		delete _brain;
		_brain = new Brain();
		*_brain = *src._brain;
	 
	}

	return *this;
}

/* Destructor */
Cat::~Cat() {
	delete _brain;
	std::cout << MAGENTA << "Destructor Cat called" << RESET << std::endl;
}
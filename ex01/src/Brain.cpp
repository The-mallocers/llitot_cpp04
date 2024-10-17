#include "../inc/Brain.hpp"

/* Constructor */
Brain::Brain() : _index(0) {
	std::cout << MAGENTA << "Constructor Brain called" << RESET << std::endl;
}

/* Copy constructor */
Brain::Brain(const Brain &toCopy) {
	*this = toCopy;
}

/* Member function*/
void Brain::newIdeas(const std::string newIdeas) {
	if (_index < 100) {
		_ideas[_index] = newIdeas;
		_index++;
	}
	else
		std::cout << "Can't make more ideas !" << std::endl;
}

void Brain::printIdeas() { 
	
	for (unsigned int i = 0; i < _index; i++) {
		std::cout << i << ".idea: " << _ideas[i] << std::endl;
	}
}


/* Overload */
Brain &Brain::operator=(const Brain &src) {
	std::cout << MAGENTA << "Brain copy assignment called" << RESET << std::endl;

	unsigned int i = 0;
	if (this != &src) {
		_index = src._index;
		while (i < 100) {
			_ideas[i] = src._ideas[i];
			i++;
		}
	}

	return *this;
}

/* Destructor */
Brain::~Brain() {
	std::cout << MAGENTA << "Destructor Brain called" << RESET << std::endl;
}
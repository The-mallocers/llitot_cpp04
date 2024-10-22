#include "../inc/WrongCat.hpp"

/* Constructor */
WrongCat::WrongCat() {
	std::cout << MAGENTA << "Constructor WrongCat called" << RESET << std::endl;
	_type = "WrongCat";
}

/* Copy constructor */
WrongCat::WrongCat(const WrongCat &toCopy) {
	*this = toCopy;
}

/* Member function */
void WrongCat::makeSound() const{
	std::cout << _type << ": ! UUUUUOAIM" << std::endl;
}

/* Overload */
WrongCat &WrongCat::operator=(const WrongCat &src) {
	std::cout << MAGENTA << "WrongCat copy assignment called" << RESET << std::endl;

	if (this != &src) {
		this->_type = src._type;
	}

	return *this;
}

/* Destructor */
WrongCat::~WrongCat() {
	std::cout << MAGENTA << "Destructor WrongCat called" << RESET << std::endl;
}
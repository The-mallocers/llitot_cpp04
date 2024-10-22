#include "../inc/Cure.hpp"

Cure::Cure() : AMateria("cure") {
	std::cout << MAGENTA << "Cure constructor called" << RESET << std::endl;
}
Cure::~Cure() {
    std::cout << MAGENTA << "Cure destructor called" << RESET << std::endl;
}

AMateria* Cure::clone() const {
    return (new Cure(*this));
}

void Cure::use(ICharacter &target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure::Cure(const Cure &other) {
    *this = other;
}

Cure &Cure::operator=(const Cure &other) {
    std::cout << MAGENTA << "Cure copy constructor called" << RESET << std::endl;

	if (this != &other) {
        _type = other._type;
    }

    return (*this);
}
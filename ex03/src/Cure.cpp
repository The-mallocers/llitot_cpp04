#include "../inc/Cure.hpp"

Cure::Cure() : AMateria("cure") {
	std::cout << MAGENTA << "Cure constructor called" << RESET << std::endl;
}

// Cure::Cure(const Cure &other) {

// }

Cure::~Cure() {
    std::cout << MAGENTA << "Cure destructor called" << RESET << std::endl;
}

AMateria* Cure::clone() const {
    return (new Cure(*this));
}

void Cure::use(ICharacter &target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
#include "../inc/AMateria.hpp"

// AMateria::AMateria() : _type("Default") {
//     std::cout << MAGENTA << "Daefault AMateria constructor called" << RESET << std::endl;
// }

AMateria::AMateria(std::string const & type) : _type(type) {
    std::cout << MAGENTA << "AMateria constructor called" << RESET << std::endl;
}

AMateria::AMateria(const AMateria &toCopy) {
    *this = toCopy;
}

AMateria &AMateria::operator=(const AMateria &src) {
    std::cout << MAGENTA << "AMateria copy constructor called" << RESET << std::endl;

    if (this != &src) {
        _type = src._type;
    }

    return (*this);
}

AMateria::~AMateria() {
    std::cout << MAGENTA << "AMateria destructor called" << RESET << std::endl;
}

std::string const & AMateria::getType() const {
    return (_type);
}

void AMateria::use(ICharacter &target) {
    std::cout << "* c'ant do anything to " << target.getName() << " *" << std::endl;   
}
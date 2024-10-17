#ifndef CURE_HPP
#define CURE_HPP

#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria {

    public:
        Cure();
        // Cure(const Cure &other);
        // Cure &operator=(const Cure &ohter);
        ~Cure();

        AMateria* clone() const;
        void use(ICharacter& target);
};


#endif

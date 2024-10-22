#ifndef ICE_HPP
#define ICE_HPP

#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria {

    public:
        Ice();
        Ice(const Ice &other);
        Ice &operator=(const Ice &ohter);
        ~Ice();

        AMateria* clone() const;
        void use(ICharacter& target);
};


#endif
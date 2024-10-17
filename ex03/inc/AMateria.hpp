
#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

/* colors */
#define RESET	"\033[0m"
#define MAGENTA	"\033[35m"
#define YELLOW "\033[33m"
#define NLINE std::cout << std::endl; 

class ICharacter;

class AMateria {

    protected:
        std::string _type;

    public:
        // AMateria();
        AMateria(std::string const & type);
        AMateria(const AMateria &toCopy);
        AMateria &operator=(const AMateria &src);
        virtual ~AMateria();

        std::string const & getType() const; 
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);

};

#endif
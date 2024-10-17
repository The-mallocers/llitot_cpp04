#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

    public:
     /* Constructor */
        WrongCat();

        /* Copy Constructor */
        WrongCat(const WrongCat &toCopy);

        /* Overload */
        WrongCat &operator=(const WrongCat &src);

        /* Destructor */
        ~WrongCat();

        /* Member function */
        void makeSound() const;

};


#endif
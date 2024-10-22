#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {

    public:
        /* Constructor */
        Dog();

        /* Copy Constructor */
        Dog(const Dog &toCopy);

        /* Overload */
        Dog &operator=(const Dog &src);

        /* Destructor */
        ~Dog();

        /* Member function */
        void makeSound() const;
};


#endif
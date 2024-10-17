#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {

    public:
     /* Constructor */
        Cat();

        /* Copy Constructor */
        Cat(const Cat &toCopy);

        /* Overload */
        Cat &operator=(const Cat &src);

        /* Destructor */
        ~Cat();

        /* Member function */
        void makeSound() const;

};


#endif
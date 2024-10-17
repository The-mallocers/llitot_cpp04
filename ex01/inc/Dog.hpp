#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {

    private:
        Brain *_brain;

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
        void makeSound();
        void makeIdeas(const std::string newIdeas);
        void sayIdeas();
};


#endif
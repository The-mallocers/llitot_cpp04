#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

    private:
        Brain *_brain;

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
        void makeSound();
        void makeIdeas(const std::string newIdeas);
        void sayIdeas();

};

#endif
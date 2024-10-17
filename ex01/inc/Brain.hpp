#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class Brain {

    private:
        std::string _ideas[100];
        unsigned int _index;

    public:
        /* Constructor */
        Brain();
        /* Copy Constructor */
        Brain(const Brain &toCopy);
        /* Overload */
        Brain &operator=(const Brain &src);
        /* Destructor */
        ~Brain();

        /* Member funciton */
        void newIdeas(const std::string ideas);
        void printIdeas();
};

#endif
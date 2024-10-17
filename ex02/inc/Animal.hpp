#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>


/* colors */
#define RESET	"\033[0m"
#define MAGENTA	"\033[35m"
#define YELLOW "\033[33m"
#define NLINE std::cout << std::endl; 

class Animal {

    protected:
        std::string _type;

    public:
        /* Constructor */
        Animal();

        /* Copy Constructor */
        Animal(const Animal &toCopy);

        /* Overload */
        Animal &operator=(const Animal &src);

        /* Destructor */
        virtual ~Animal() =  0;

        /* Member function */
        virtual void makeSound() = 0;
        virtual void makeIdeas(const std::string newIdeas) = 0;
        virtual void sayIdeas() = 0;
        std::string getType() const;


};

#endif
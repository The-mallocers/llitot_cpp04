#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

/* colors */
#define RESET	"\033[0m"
#define MAGENTA	"\033[35m"
#define YELLOW "\033[33m"
#define NLINE std::cout << std::endl; 

class WrongAnimal {

    protected:
        std::string _type;

    public:
        /* Constructor */
        WrongAnimal();

        /* Copy Constructor */
        WrongAnimal(const WrongAnimal &toCopy);

        /* Overload */
        WrongAnimal &operator=(const WrongAnimal &src);

        /* Destructor */
        virtual ~WrongAnimal();

        /* Member function */
        void makeSound() const;
        std::string getType() const;


};

#endif
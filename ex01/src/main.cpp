#include "../inc/Animal.hpp"
#include "../inc/Brain.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

int main()
{
	{
		{
			std::cout << YELLOW << "Test:" << std::endl;
			Animal* meta = new Animal();
			NLINE

			Animal* j = new Dog();
			NLINE

			Animal* i = new Cat();
			NLINE

			std::cout << BLUE << "getType :" << RESET << std::endl;
			std::cout << meta->getType() << " " << std::endl;
			std::cout << j->getType() << " " << std::endl;
			std::cout << i->getType() << " " << std::endl;
			NLINE

			std::cout << BLUE << "makeSound :" << RESET << std::endl;
			meta->makeSound();
			i->makeSound();
			j->makeSound();
			NLINE

			std::cout << BLUE << "makeIdeas :" << RESET << std::endl;
			for (size_t k = 0; k < 15 ; k++) {
				i->makeIdeas("test ?");
			}
			j->makeIdeas("test1 ?");
			meta->makeIdeas("test2 ?");
			NLINE

			std::cout << BLUE << "Cat sayIdeas:" << RESET << std::endl;
			i->sayIdeas();
			NLINE

			std::cout << BLUE << "Dog sayIdeas:" << RESET << std::endl;
			j->sayIdeas();
			NLINE

			std::cout << BLUE << "Animal sayIdeas:" << RESET << std::endl;
			meta->sayIdeas();
			NLINE

			delete meta;
			NLINE
			delete j;
			NLINE
			delete i;
		}
		NLINE
		NLINE
		{
			std::cout << YELLOW << "Deep copy Test:" << std::endl;
			Cat cat1;
			NLINE
			cat1.makeIdeas("Chase mice");
			cat1.makeIdeas("Sleep in the sun");

			Cat cat2;
			NLINE
			
			cat2 = cat1;
			NLINE
			
			cat2.makeIdeas("Play with yarn");


			std::cout << BLUE << "Cat1 ideas:" << RESET << std::endl;
			cat1.sayIdeas();
			NLINE


			std::cout << BLUE << "Cat2 ideas:" << RESET << std::endl;
			cat2.sayIdeas();
			NLINE

		}
		NLINE
		NLINE
		{
			std::cout << YELLOW << "Animal list Test:" << std::endl;
			
			Animal*	animals[5];

			for(int i = 0; i < 5; i++) {
				std::cout << YELLOW << i << "." << RESET;
				animals[i] = new Cat();
				NLINE
			}

			for(int i = 0; i < 5; i++) {
				std::cout << BLUE << i << "." << RESET;
				delete animals[i];
				NLINE
			}
		}

	}

	return 0;
}
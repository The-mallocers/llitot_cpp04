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

			std::cout << meta->getType() << " " << std::endl;
			std::cout << j->getType() << " " << std::endl;
			std::cout << i->getType() << " " << std::endl;
			NLINE

			meta->makeSound();
			i->makeSound();
			j->makeSound();
			NLINE

			for (size_t k = 0; k < 15 ; k++) {
				i->makeIdeas("test ?");
			}
			j->makeIdeas("test1 ?");
			meta->makeIdeas("test2 ?");
			NLINE

			std::cout << "Cat ideas:" << std::endl;
			i->sayIdeas();
			NLINE

			std::cout << "Dog ideas:" << std::endl;
			j->sayIdeas();
			NLINE

			meta->sayIdeas();
			NLINE

			delete meta;
			delete j;
			delete i;
		}
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

			std::cout << "cat1 ideas:" << std::endl;
			cat1.sayIdeas();

			std::cout << "cat2 ideas:" << std::endl;
			cat2.sayIdeas();
		}
		NLINE
		{
			std::cout << YELLOW << "Animal list Test:" << std::endl;
			
			Animal*	animals[10];

			for(int i = 0; i < 10; i++) {
				std::cout << YELLOW << i << "." << RESET;
				animals[i] = new Cat();
				NLINE
			}

			for(int i = 0; i < 10; i++) {
				delete animals[i];
			}
		}

	}

	return 0;
}
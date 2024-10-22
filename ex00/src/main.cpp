#include "../inc/Animal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

int main()
{
	{
		std::cout << YELLOW << "Basic Test:" << RESET << std::endl;
		const Animal* meta = new Animal();
		NLINE

		const Animal* j = new Dog();
		NLINE

		const Animal* i = new Cat();
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
	
		delete meta;
		NLINE
		delete i;
		NLINE
		delete j;
	}
	NLINE
	NLINE
	{
		std::cout << YELLOW << "WrongAnimal Test:" << RESET << std::endl;
		const WrongAnimal* test = new WrongAnimal();
		NLINE
		const WrongAnimal* gato = new WrongCat();
		NLINE

		std::cout << BLUE << "getType :" << RESET << std::endl;
		std::cout << test->getType() << " " << std::endl;
		std::cout << gato->getType() << " " << std::endl;
		NLINE
		
		std::cout << BLUE << "makeSound :" << RESET << std::endl;
		test->makeSound();
		gato->makeSound();
		NLINE

		delete test;
		NLINE
		delete gato;
	}

	return 0;
}
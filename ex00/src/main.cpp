#include "../inc/Animal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

int main()
{
	{
		const Animal* meta = new Animal();
		NLINE

		const Animal* j = new Dog();
		NLINE

		const Animal* i = new Cat();
		NLINE

		std::cout << meta->getType() << " " << std::endl;
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		NLINE
		
		meta->makeSound();
		i->makeSound();
		j->makeSound();
		NLINE
	
		delete meta;
		delete i;
		delete j;
	}
	NLINE
	{
		NLINE
		const WrongAnimal* test = new WrongAnimal();
		NLINE
		const WrongAnimal* gato = new WrongCat();
		NLINE

		std::cout << test->getType() << " " << std::endl;
		std::cout << gato->getType() << " " << std::endl;
		NLINE
		
		test->makeSound();
		gato->makeSound();
		NLINE

		delete test;
		delete gato;
	}

	return 0;
}
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

//TODO type
int main(void)
{
	const Animal*		meta = new Animal;
	const Animal*		j = new Dog();
	const Animal*		i = new Cat();
        const Dog*              k = new Dog();
	const WrongAnimal*	weird = new WrongAnimal;
	const WrongAnimal*	weirdcat = new WrongCat;

	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	meta->makeSound();
	i->makeSound();
	j->makeSound();
        k->makeSound();
        k->Animal::makeSound();
	std::cout << weird->getType() << " " << std::endl;
	weird->makeSound();
	std::cout << weirdcat->getType() << " " << std::endl;
	weirdcat->makeSound();
	delete meta;
	delete i;
	delete j;
        delete k;
	delete weird;
	delete weirdcat;
	return (0);
}

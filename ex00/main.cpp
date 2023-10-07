#include "Cat.hpp"
#include "Dog.hpp"

int main( void )
{
	const Animal*	meta = new Animal;
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;

	meta->makeSound();
	i->makeSound();
	j->makeSound();

	delete meta;
	delete i;
	delete j;
	return (0);
}
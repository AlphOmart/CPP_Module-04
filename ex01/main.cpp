#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void)
{
	{
		const Animal*	array[10];

		for ( int i = 0; i < 5; i++ )
			array[i] = new Cat();
		for ( int i = 5; i < 10; i++ )
			array[i] = new Dog();

		for ( int i = 0; i < 10; i++ )
		{
			std::cout << array[i]->getType() << " " << std::endl;
			std::cout << array[i]->getBrainIdeas(0) << std::endl;
		}
		for ( int i = 0; i < 10; i++ )
			delete array[i];
	}

	std::cout << std::endl;
	Dog*	a = new Dog();
	Dog*	b = new Dog();
	a->setBrainIdeas( "sleep", 0 );
	*b = *a;
	a->setBrainIdeas("look at void", 25);
	b->setBrainIdeas( "play", 50);

	std::cout << "\n";
	std::cout << "a 0 : " << a->getBrainIdeas(0) << std::endl;
	std::cout << "a 25 : " << a->getBrainIdeas(25) << std::endl;
	std::cout << "a 50 : " << a->getBrainIdeas(50) << std::endl;

	std::cout << "b 0 : " << b->getBrainIdeas(0) << std::endl;
	std::cout << "b 25 : " << b->getBrainIdeas(25) << std::endl;
	std::cout << "b 50 : " << b->getBrainIdeas(50) << std::endl;

	delete a;
	delete b;
	return (0);
}

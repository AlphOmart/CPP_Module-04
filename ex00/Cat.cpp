#include "Cat.hpp"

Cat::Cat( void ) : Animal()
{
	std::cout << "default Cat constructor called!" << std::endl;
	this->_type = "Cat";
}

Cat::~Cat( void )
{
	std::cout << "Cat destructor called!" << std::endl;
}

void	Cat::makeSound( void ) const
{
	std::cout << "*MEOW*" << std::endl;
}
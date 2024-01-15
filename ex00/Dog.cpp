#include "Dog.hpp"

/////////////////////////////////////////////////////////////////////
///////////////////   Constructor //////////////////////////////////
///////////////////////////////////////////////////////////////////

Dog::Dog( void ) : Animal()
{
	std::cout << "\x1b[38;2;255;165;0m" << "default Dog constructor called!" << "\x1b[0m" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog& original) : Animal(original)
{
	std::cout << "\x1b[38;2;255;165;0m" << "Copy Dog constructor called !" << "\x1b[0m" << std::endl;
	*this = original;
}

Dog&	Dog::operator=(const Dog& original)
{
	if (this == &original)
		return(*this);
	this->type = original.type;
	return (*this);
}

Dog::~Dog( void )
{
	std::cout << "\x1b[38;2;255;165;0m" << "Dog destructor called!" << "\x1b[0m" << std::endl;
}

void	Dog::makeSound( void ) const
{
	std::cout << "*WOOF-WOOF*" << std::endl;
}
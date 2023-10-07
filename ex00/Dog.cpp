#include "Dog.hpp"

Dog::Dog( void )
{
	std::cout << "default Dog constructor called!" << std::endl;
	this->_type = "Dog";
}

Dog::~Dog( void )
{
	std::cout << "Dog destructor called!" << std::endl;
}

void	Dog::makeSound( void ) const
{
	std::cout << "*WOOF-WOOF*" << std::endl;
}
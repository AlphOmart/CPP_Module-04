#include "Animal.hpp"

Animal::Animal( void )
{
	std::cout << "default animal constructor called!" << std::endl;
	this->_type = "Animal";
}

Animal::~Animal( void )
{
	std::cout << "Animal destructor called!" << std::endl;
}

void	Animal::makeSound( void ) const
{
	std::cout << "*Some Animals sounds!*" << std::endl;
}

const std::string&	Animal::getType( void ) const
{
	return (this->_type);
}
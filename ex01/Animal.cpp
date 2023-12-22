#include "Animal.hpp"


/////////////////////////////////////////////////////////////////////
///////////////////   Constructor //////////////////////////////////
///////////////////////////////////////////////////////////////////
Animal::Animal(void)
{
	std::cout << "\x1b[32m" << "default animal constructor called !" << "\x1b[0m" << std::endl;
	this->_type = "Animal";
}

Animal::Animal(const Animal& original)
{
	std::cout << "\x1b[32m" << "Copy Animal constructor called !" << "\x1b[0m" << std::endl;
	*this = original;
}

Animal::~Animal(void)
{
	std::cout << "\x1b[32m" << "Animal destructor called!" << "\x1b[0m" <<std::endl;
}
////////////////////////////////////////////////////////////////////
///////////////////// Overload Operator ////////////////////////////
////////////////////////////////////////////////////////////////////
Animal& Animal::operator=(const Animal& original)
{
	if (this == &original)
		return (*this);
	this->_type = original._type;
	return (*this);
}

////////////////////////////////////////////////////////////////////
///////////////////// Member Functions  ////////////////////////////
////////////////////////////////////////////////////////////////////

const std::string&	Animal::getType( void ) const
{
	return (this->_type);
}

void	Animal::makeSound( void ) const
{
	std::cout << "*Some Animals sounds!*" << std::endl;
}

std::string	Animal::getBrainIdeas(const unsigned int& index) const
{
	(void)index;
	return ("");
}

void	Animal::setBrainIdeas(const std::string& new_ideas,  const unsigned int& index) const
{
	(void)new_ideas;
	(void)index;
}
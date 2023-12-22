#include "AAnimal.hpp"


/////////////////////////////////////////////////////////////////////
///////////////////   Constructor //////////////////////////////////
///////////////////////////////////////////////////////////////////
AAnimal::AAnimal(void)
{
	std::cout << "\x1b[32m" << "default animal constructor called !" << "\x1b[0m" << std::endl;
	this->_type = "Animal";
}

AAnimal::AAnimal(const AAnimal& original)
{
	std::cout << "\x1b[32m" << "Copy Animal constructor called !" << "\x1b[0m" << std::endl;
	*this = original;
}

AAnimal::~AAnimal(void)
{
	std::cout << "\x1b[32m" << "Animal destructor called!" << "\x1b[0m" <<std::endl;
}
////////////////////////////////////////////////////////////////////
///////////////////// Overload Operator ////////////////////////////
////////////////////////////////////////////////////////////////////
AAnimal&	AAnimal::operator=(const AAnimal& original)
{
	if (this == &original)
		return (*this);
	this->_type = original._type;
	return (*this);
}

////////////////////////////////////////////////////////////////////
///////////////////// Member Functions  ////////////////////////////
////////////////////////////////////////////////////////////////////

const std::string&	AAnimal::getType( void ) const
{
	return (this->_type);
}

void	AAnimal::makeSound( void ) const
{
	std::cout << "*Some Animals sounds!*" << std::endl;
}

std::string	AAnimal::getBrainIdeas(const unsigned int& index) const
{
	(void)index;
	return ("");
}

void	AAnimal::setBrainIdeas(const std::string& new_ideas,  const unsigned int& index) const
{
	(void)new_ideas;
	(void)index;
}
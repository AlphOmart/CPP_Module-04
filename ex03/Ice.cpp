#include "Ice.hpp"

Ice::Ice(void) : AMateria()
{
	this->_type = "ice";
}

Ice::Ice(std::string const& type) : AMateria(type)
{
	this->_type = type;
}

Ice::Ice(const Ice& original) : AMateria(original)
{
	*this = original;
}

Ice::~Ice(void)
{
}

Ice&	Ice::operator=(const Ice& original)
{
	if (this == &original)
		return (*this);
	this->_type = original._type;
	return (*this);
}

AMateria*	Ice::clone(void) const
{
	return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
	std::cout << "\x1b[34m* shoots an ice bolt at " << target.getName() << " *\x1b[0m" << std::endl;
}

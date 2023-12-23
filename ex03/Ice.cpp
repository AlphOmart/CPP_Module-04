#include "Ice.hpp"

Ice::Ice(void)
{
	this->_type = "ice";
};

Ice::Ice(std::string const& type)
{
	this->_type = type;
};

Ice::Ice(const Ice& original)
{
	*this = original;
};

Ice::~Ice(void)
{
};

Ice&	Ice::operator=(const Ice& original)
{
	if (this == &original)
		return (*this);
	this->_type = original._type;
	return (*this);
};

AMateria*	Ice::clone(void) const
{
	Ice* clone = new	Ice();
	clone = this;
	return (clone);
};

void Ice::use(ICharactere& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;

};

#include "AMateria.hpp"

#include "Cure.hpp"

AMateria::AMateria(void)
{
	this->_type = "Neutral";
};

AMateria::AMateria(std::string const& type)
{
	this->_type = type;
};

AMateria::AMateria(const AMateria& original)
{
	*this = original;
};

AMateria::~AMateria(void)
{
};

AMateria&	AMateria::operator=(const AMateria& original)
{
	if (this == &original)
		return (*this);
	this->_type = original._type;
	return (*this);
};

std::string const&	AMateria::getType(void) const
{
	return (this->_type);
};

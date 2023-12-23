#include "Cure.hpp"

Cure::Cure(void)
{
	this->_type = "Cure";
};

Cure::Cure(std::string const& type)
{
	this->_type = type;
};

Cure::Cure(const Cure& original)
{
	*this = original;
};

Cure::~Cure(void)
{
};

Cure&	Cure::operator=(const Cure& original)
{
	if (this == &original)
		return (*this);
	this->_type = original._type;
	return (*this);
};

AMateria*	Cure::clone(void) const
{
	Cure* clone = new	Cure();
	clone = this;
	return (clone);
};

void Cure::use(ICharactere& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
};

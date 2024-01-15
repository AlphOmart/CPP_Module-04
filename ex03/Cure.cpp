#include "Cure.hpp"

Cure::Cure(void) : AMateria()
{
	this->_type = "cure";
};

Cure::Cure(std::string const& type) : AMateria(type)
{
	this->_type = type;
};

Cure::Cure(const Cure& original) : AMateria(original)
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
	return new Cure(*this);
};

void Cure::use(ICharacter& target)
{
	std::cout << "\x1b[33m* heals " << target.getName() << "’s wounds *\x1b[0m" << std::endl;
};

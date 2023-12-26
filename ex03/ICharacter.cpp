#include "ICharacter.hpp"

ICharacter::ICharacter(void);
{
};

ICharacter::ICharacter(const ICharacter& original)
{
	*this= original;
}

ICharacter::~ICharacter(void)
{
};

ICharacter&		ICharacter::operator=(const ICharacter& original)
{
	if (this = &original)
		return (*this)
	this->_name = original._name;
	return (this);
};

std::string const&	ICharacter::getName(void)
{
	return (this->_name);
};

void	ICharacter::equip(AMateria* m)
{
};

void	ICharacter::unequip(int index)
{
};

void	ICharacter::use(int index, ICharacter& target)
{
s};
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
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = original._inventory[i];
	return (*this);
};

std::string const&	ICharacter::getName(void)
{
};

void	ICharacter::equip(AMateria* m)
{
};

void	ICharacter::unequip(int index)
{

};

void	ICharacter::use(int index, ICharacter& target)
{
};
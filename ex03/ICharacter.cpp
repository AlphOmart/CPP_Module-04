#include "ICharacter.hpp"

ICharacter::ICharacter(void)
{
	this->_name = "Unnamed";
};

ICharacter::ICharacter(const std::string& name)
{
	this->_name = name;
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
	if (this == &original)
		return (*this);
	this->_name = original._name;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = original._inventory[i];
	return (*this);
};

std::string const&	ICharacter::getName(void) const
{
	return (this->_name);
};

void	ICharacter::equip(AMateria* m)
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m->clone() ;
			break;
		}
	}
};

void	ICharacter::unequip(int index)
{
	(void)index;
};

void	ICharacter::use(int index, ICharacter& target)
{
	if (index < 0 || index >= 4)
	{
		std::cout << "invalid index !" << std::endl;
		return ;
	}
	if (this->_inventory[index] != NULL)
		this->_inventory[index]->use(target);
	std::cout << "No materia at this index !" << std::endl;
};
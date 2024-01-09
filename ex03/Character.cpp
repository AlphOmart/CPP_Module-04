#include "Character.hpp"

Character::Character(void) : ICharacter()
{
	this->_name = "Unnamed";
	for (int i = 0; i < 4; ++i)
		this->_inventory[i] = NULL;
};

Character::Character(const std::string& name) : ICharacter(name)
{
	this->_name = name;
	for (int i = 0; i < 4; ++i)
		this->_inventory[i] = NULL;
};

Character::Character(const Character& original) : ICharacter(original)
{
	*this = original;
};

Character::~Character(void)
{
};

Character&	Character::operator=(const Character& original)
{
	if (this == &original)
		return (*this);
	this->_name = original._name;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = original._inventory[i];
	return (*this);
};

std::string const&	Character::getName(void) const
{
	return (this->_name);
};

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			std::cout << i << std::endl;
			break;
		}
	}
}

void Character::unequip(int index)
{
	(void)index;
}


void	Character::use(int index, ICharacter& target)
{
	if (index < 0 || index >= 4)
	{
		std::cout << "invalid index !" << std::endl;
		return ;
	}
	_inventory[index]->use(target);
};
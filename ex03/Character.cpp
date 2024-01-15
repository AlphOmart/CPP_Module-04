#include "Character.hpp"

Character::Character(void) : ICharacter()
{
	this->_name = "Unnamed";
	for (int i = 0; i < 4; ++i)
		this->_inventory[i] = NULL;
	_garbage = new Floor();
}

Character::Character(const std::string& name) : ICharacter()
{
	this->_name = name;
	for (int i = 0; i < 4; ++i)
		this->_inventory[i] = NULL;
	_garbage = new Floor();
}

Character::Character(const Character& original) : ICharacter()
{
	*this = original;
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
	}
	delete _garbage;
}

Character&	Character::operator=(const Character& original)
{
	if (this == &original)
		return (*this);
	this->_name = original._name;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = original._inventory[i];
	delete _garbage;
	_garbage = original._garbage;
	return (*this);
}

std::string const&	Character::getName(void) const
{
	return (this->_name);
};

void	Character::getInventory(void)
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->_inventory[i] != NULL)
			std::cout <<"\x1b[32mInventory[" << i << "] = " << this->_inventory[i]->getType() << "\x1b[0m" << std::endl;
		else
			std::cout << "\x1b[32mInventory[" << i << "] = no materia\x1b[0m" << std::endl;
	}
	std::cout << std::endl;
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m->clone();
			delete m;
			return ;
		}
	}
	std::cout << "\x1b[38;2;200;0;0mInventory is full\x1b[0m" << std::endl;
	delete m;
}

void Character::unequip(int index)
{
	if (index < 0 || 4 <= index)
	{
		std::cout << "invalid index !" << std::endl;
		return;
	}
	if (this->_inventory[index] != NULL)
	{
		this->_garbage->addElement(&(_inventory[index]));
		this->_inventory[index] = NULL;
	}
}


void	Character::use(int index, ICharacter& target)
{
	if (index < 0 || index >= 4)
	{
		std::cout << "\x1b[31minvalid index !\x1b[0m" << std::endl;
		return ;
	}
	if (this->_inventory[index] == NULL)
	{
		std::cout << "\x1b[31mNo materia at this index !\x1b[0m" << std::endl;
		return ;
	}
	this->_inventory[index]->use(target);
}
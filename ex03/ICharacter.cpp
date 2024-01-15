#include "ICharacter.hpp"

ICharacter::ICharacter(void)
{
	this->_name = "Unnamed";
	this->_garbage = new Floor();
}

ICharacter::ICharacter(const std::string& name)
{
	this->_name = name;
	this->_garbage = new Floor();
}

ICharacter::ICharacter(const ICharacter& original)
{
	*this= original;
}

ICharacter::~ICharacter(void)
{
	delete _garbage;
}

ICharacter&		ICharacter::operator=(const ICharacter& original)
{
	if (this == &original)
		return (*this);
	this->_name = original._name;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = original._inventory[i];
	return (*this);
}

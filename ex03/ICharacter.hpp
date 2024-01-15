#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include "AMateria.hpp"
#include "Floor.hpp"
class ICharacter
{
protected:
	std::string	_name;
	AMateria*	_inventory[4];
	Floor*	_garbage;
public:
	ICharacter(void);
	ICharacter(const std::string& name);
	ICharacter(const ICharacter& original);
	virtual ~ICharacter(void);
	ICharacter&		operator=(const ICharacter& original);

	virtual std::string const&	getName(void) const = 0;
	virtual void				equip(AMateria* m) = 0;
	virtual void				unequip(int index) = 0;
	virtual void				use(int index, ICharacter& target) = 0;
};

#endif
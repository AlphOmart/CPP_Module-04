#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
protected:
	std::string	_name;
	AMateria*	_inventory[4];
	Floor*	_garbage;
public:
	Character(void);
	Character(const std::string& name);
	Character(const Character& original);
	virtual ~Character(void);
	Character&		operator=(const Character& original);

	virtual			std::string const&	getName(void) const;
	void			getInventory(void) const;
	virtual void	equip(AMateria* m);
	virtual void	unequip(int index);
	virtual void	use(int index, ICharacter& target);
};

#endif
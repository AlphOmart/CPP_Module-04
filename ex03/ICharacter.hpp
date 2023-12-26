#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

class ICharacter
{
private:
	std::string		_name;
	Amateria*		_inventory[4];
public:
	ICharacter(void);
	ICharacter(const ICharacter& original);
	virtual ~ICharacter(void);
	ICharacter&		operator=(const ICharacter& original);

	virtual			std::string const& getName() const = 0;
	virtual void	equip(AMateria* m) = 0;
	virtual void	unequip(int index) = 0;
	virtual void	use(int index, ICharacter& target) = 0;
};

#endif
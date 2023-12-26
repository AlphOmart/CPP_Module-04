#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		void			Character(void);
		void			Character(const Character& original);
		virtual			~Character(void);
		ICharacter&		operator=(const Character& original);

		virtual			std::string const& getName() const = 0;
		virtual void	equip(AMateria* m) = 0;
		virtual void	unequip(int index) = 0;
		virtual void	use(int index, Character& target) = 0;
};

#endif
#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>

class ICharacter;

class AMateria
{
protected:
	std::string	_type;
public:
	AMateria(void);
	AMateria(std::string const& type);
	AMateria(const AMateria& original);
	virtual ~AMateria(void) = 0;

	AMateria&	operator=(const AMateria& original);

	std::string const&	getType(void) const;
	virtual	AMateria*	clone(void) const = 0;
	virtual void		use(ICharacter& target) = 0;
};

#endif
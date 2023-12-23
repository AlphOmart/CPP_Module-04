#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>

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

	std::string const&	getType(void) const; // Return the Materia type
	virtual	AMateria*	clone(void) const = 0;
	virtual void		use(ICharactere& target);
};

#endif
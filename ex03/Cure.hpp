#ifndef CURE_HPP
# define CURE_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Cure : public AMateria
{

public:
	Cure(void);
	Cure(std::string const& type);
	Cure(const Cure& original);
	~Cure(void);

	Cure&	operator=(const Cure& original);
	virtual	AMateria*	clone(void) const;
	virtual void		use(ICharacter& target);
};

#endif
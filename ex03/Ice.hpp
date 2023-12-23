#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{

public:
	Ice(void);
	Ice(std::string const& type);
	Ice(const Ice& original);
	~Ice(void);

	Ice&	operator=(const Ice& original);
	virtual	AMateria*	clone(void) const;
	virtual void		use(ICharactere& target);
};

#endif
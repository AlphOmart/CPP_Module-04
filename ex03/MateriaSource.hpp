#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{

public:
	MateriaSource();
	virtual ~MateriaSource(void);
	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);
	void	getStock(void) const;
};

#endif
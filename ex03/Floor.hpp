#ifndef	FLOOR_HPP
# define	FLOOR_HPP

# include "AMateria.hpp"

class Floor
{
private:
	AMateria **_lst;
public:
	Floor();
	Floor(const Floor& original);
	~Floor();

	Floor&	operator=(const Floor& original);

	void	addElement(AMateria** element);
};

#endif
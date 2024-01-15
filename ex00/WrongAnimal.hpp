#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include "Animal.hpp"

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& original);
	virtual ~WrongAnimal();

	WrongAnimal&	operator=(const WrongAnimal& original);

	const std::string&	getType(void) const;
	void			makeSound(void) const;
};

#endif
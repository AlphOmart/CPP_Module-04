#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include "AAnimal.hpp"

class WrongAnimal
{
protected:
	std::string _type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& original);
	virtual ~WrongAnimal();

	WrongAnimal&	operator=(const WrongAnimal& original);

	const std::string&	getType(void) const;
	void			makeSound(void) const;
};

#endif
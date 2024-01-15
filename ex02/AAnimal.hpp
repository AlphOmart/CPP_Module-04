#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>

class AAnimal
{
protected:
	std::string	type;
public:
	AAnimal(void);
	AAnimal(const AAnimal& original);
	virtual	~AAnimal(void) = 0;

	AAnimal&				operator=(const AAnimal& original);


	const std::string&	getType( void ) const;
	virtual void		makeSound( void ) const;
	virtual void		setBrainIdeas(const std::string& new_ideas, const unsigned int& index)const = 0;
	virtual std::string	getBrainIdeas(const unsigned int& index) const = 0;
};

#endif
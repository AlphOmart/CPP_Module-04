#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
	std::string	_type;
public:
	Animal(void);
	Animal(const Animal& original);
	virtual	~Animal(void);

	Animal&				operator=(const Animal& original);


	const std::string&	getType( void ) const;
	virtual void		makeSound( void ) const;
	virtual void		setBrainIdeas(const std::string& new_ideas, const unsigned int& index)const;
	virtual std::string	getBrainIdeas(const unsigned int& index) const;
};

#endif
#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
	std::string	_type;
public:
	Animal( void );
	virtual ~Animal( void );

	virtual void			makeSound( void ) const;
	const std::string&	getType( void ) const;
};

#endif
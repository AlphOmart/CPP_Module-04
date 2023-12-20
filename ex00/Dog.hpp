#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog( void );
	Dog(const Dog& original);
	~Dog( void );

	Dog&	operator=(const Dog& original);
	void	makeSound( void ) const;
};

#endif
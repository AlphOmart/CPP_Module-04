#ifndef DOG_HPP
# define DOG_HPP

# include "Brain.hpp"

class Dog : public AAnimal
{
private:
	Brain	*_brain;
public:
	Dog( void );
	Dog(const Dog& original);
	~Dog( void );

	Dog&	operator=(const Dog& original);
	virtual void	makeSound( void ) const;
	virtual std::string	getBrainIdeas(const unsigned int& index)const;
	virtual void	setBrainIdeas(const std::string& new_ideas, const unsigned int& index)const;
};

#endif
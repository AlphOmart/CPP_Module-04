#ifndef CAT_HPP
# define CAT_HPP
# include "Brain.hpp"

class Cat : public AAnimal
{
private:
	Brain	*_brain;
public:
	Cat(void);
	Cat(const Cat& original);
	~Cat( void );

	Cat&	operator=(const Cat& original);
	virtual std::string	getBrainIdeas(const unsigned int& index) const;
	virtual void	setBrainIdeas(const std::string& new_ideas, const unsigned int& index) const;
	virtual void	makeSound() const;
};

#endif
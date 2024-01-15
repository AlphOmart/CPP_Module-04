#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(void) : AAnimal()
{
	std::cout << "\x1b[33m" <<  "default Cat constructor called!" << "\x1b[0m" << std::endl;
	this->type = "Cat";
	this->_brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->_brain->ideas[i] = "sleep";
}
Cat::Cat(const Cat& original) : AAnimal(original)
{
	std::cout << "\x1b[33m" << "Copy Cat constructor called !" << "\x1b[0m" << std::endl;
	*this = original;
}
Cat::~Cat(void)
{
	delete this->_brain;
	std::cout << "\x1b[33m" <<  "Cat destructor called!" << "\x1b[0m" << std::endl;
}

Cat& Cat::operator=(const Cat& original)
{
	if (this == &original)
		return (*this);
	delete this->_brain;
	this->_brain = new Brain();
	*(this->_brain) = *(original._brain);
	this->type = original.type;
	return (*this);
}

void	Cat::makeSound( void ) const
{
	std::cout <<  "*MEOW*" << std::endl;
}

std::string	Cat::getBrainIdeas(const unsigned int& index) const
{
	return (this->_brain->ideas[index]);
}

void	Cat::setBrainIdeas(const std::string& new_ideas, const unsigned int& index)const
{
	if (index >= 100)
	{
		std::cout << "I can't think so much" << std::endl;
		return ;
	}
	this->_brain->ideas[index] = new_ideas;
}
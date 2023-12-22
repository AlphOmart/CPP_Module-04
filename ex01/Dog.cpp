#include "Dog.hpp"

Dog::Dog( void ) : Animal()
{
	std::cout << "\x1b[38;2;255;165;0m" << "default Dog constructor called!" << "\x1b[0m" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->_brain->_ideas[i] = "eat";
}

Dog::Dog(const Dog& original) : Animal(original)
{
	this->_brain = new Brain();
	std::cout << "\x1b[38;2;255;165;0m" << "Copy Dog constructor called !" << "\x1b[0m" << std::endl;
	*this = original;
}

Dog&	Dog::operator=(const Dog& original)
{
	if (this == &original)
		return(*this);
	delete	this->_brain;
	this->_brain = new Brain();
	this->_type = original._type;
	*(this->_brain) = *(original._brain);
	return (*this);
}

Dog::~Dog( void )
{
	std::cout << "\x1b[38;2;255;165;0m" << "Dog destructor called!" << "\x1b[0m" << std::endl;
	delete this->_brain;
}

void	Dog::makeSound( void ) const
{
	std::cout << "*WOOF-WOOF*" << std::endl;
}

std::string	Dog::getBrainIdeas(const unsigned int& index) const
{
	return (this->_brain->_ideas[index]);
}

void	Dog::setBrainIdeas(const std::string& new_ideas, const unsigned int& index)const
{
	if (index >= 100)
	{
		std::cout << "I can't think so much" << std::endl;
		return ;
	}
	this->_brain->_ideas[index] = new_ideas;
	return ;
}
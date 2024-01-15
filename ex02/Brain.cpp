#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "\x1b[34m" << "Brain default constructor called !" << "\x1b[0m" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "nothing";
}

Brain::Brain(const Brain& original)
{
	std::cout << "\x1b[34m" << "Brain copy constructor called !" << "\x1b[0m" << std::endl;
	*this = original;
}

Brain::~Brain(void)
{
	std::cout << "\x1b[34m" << "Brain copy destructor called !" << "\x1b[0m" << std::endl;
}

Brain&	Brain::operator=(const Brain& original)
{
	if (this == &original)
		return (*this);
	for (int i = 0; i < 100; i++)
		this->ideas[i] = original.ideas[i];
	return (*this);
}

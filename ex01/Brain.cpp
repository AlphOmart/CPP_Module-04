#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "\x1b[34m" << "Brain default constructor called !" << "\x1b[0m" << std::endl;
	for (int i = 0; i < 100; ++i)
		this->_ideas[i] = "nothing";
}

Brain::Brain(const Brain& original)
{
	std::cout << "\x1b[34m" << "Brain copy constructor called !" << "\x1b[0m" << std::endl;
	*this = original;
}

Brain::~Brain(void)
{
	std::cout << "\x1b[34m" << "Brain destructor called !" << "\x1b[0m" << std::endl;
}

Brain&	Brain::operator=(const Brain& original)
{
	if (this == &original)
		return (*this);
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = original._ideas[i];
	return (*this);
}

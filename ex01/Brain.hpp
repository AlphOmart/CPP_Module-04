#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "Animal.hpp"

class Brain
{
public:
	std::string	_ideas[100];

	Brain(void);
	Brain(const Brain& original);
	~Brain(void);

	Brain&	operator=(const Brain& original);
};

#endif
#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "AAnimal.hpp"

class Brain
{
public:
	std::string	ideas[100];

	Brain(void);
	Brain(const Brain& original);
	~Brain(void);

	Brain&	operator=(const Brain& original);
};

#endif
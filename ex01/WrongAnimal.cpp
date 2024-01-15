#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "\x1b[31m" << "WrongAnimal default constructor called !" << "\x1b[0m" << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& original)
{
	std::cout << "\x1b[31m"  << "WrongAnimal copy constructor called !" << "\x1b[0m" << std::endl;
	*this = original;
}
WrongAnimal::~WrongAnimal(void)
{
	std::cout << "\x1b[31m"  <<"WrongAnimal Destructor called !" << "\x1b[0m" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& original)
{
	if (this == &original)
		return (*this);
	return (*this);
}

const std::string& WrongAnimal::getType() const
{
	return (this->type);
}

void		WrongAnimal::makeSound(void) const
{
	std::cout << "*SOME HORRIBLE NOISE!!*" << std::endl;
}
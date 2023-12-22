#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal()
{
	std::cout << "\x1b[38;2;200;0;0m" <<"WrongCat default constructor called !" << "\x1b[0m" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& original): WrongAnimal(original)
{
	std::cout << "\x1b[38;2;200;0;0m" << "WrongCat copy constructor called !" << "\x1b[0m" << std::endl;
	*this = original;
}

WrongCat::~WrongCat(void)
{
	std::cout << "\x1b[38;2;200;0;0m" << "WrongCat destructor called!" << "\x1b[0m" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& original)
{
	if(this == &original)
		return (*this);
	return (*this);
}

void	WrongCat::makeSound(void)const
{
	std::cout << "cdsifgsbisdcbdsc" << std::endl;
}
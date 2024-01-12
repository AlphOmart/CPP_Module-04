#include "Floor.hpp"

Floor::Floor(void)
{
	this->_lst = new AMateria*[1];
};

Floor::Floor(const Floor& original)
{
	(void)original;
};

Floor::~Floor()
{
	//delete tout
};
#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		this->_stock[i] = NULL;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		delete _stock[i];
}

void	MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; ++i)
{
		if (_stock[i] == NULL)
		{
			_stock[i] = m->clone();
			delete m;
			return;
		}
	}
	delete m;
	std::cout << "Error: stock is full" << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_stock[i] != NULL && _stock[i]->getType() == type)
			return _stock[i]->clone();
	}
	std::cout << "Error: materia not found in spellbook !" << std::endl;
	return 0;
}

void	MateriaSource::getStock(void) const
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->_stock[i] != NULL)
			std::cout <<"\x1b[32mStock[" << i << "] = " << this->_stock[i]->getType() << "\x1b[0m" << std::endl;
		else
			std::cout << "\x1b[32mStock[" << i << "] = no materia\x1b[0m" << std::endl;
	}
	std::cout << std::endl;
}
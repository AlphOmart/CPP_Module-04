#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	std::cout << &tmp << std::endl;
	std::cout << tmp << std::endl;

	tmp = src->createMateria("cure");
	me->equip(tmp);
	std::cout << &tmp << std::endl;
	std::cout << tmp << std::endl;
	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);
//	me->use(2, *bob);

	delete bob;
	delete me;
	delete src;
	delete tmp;
	return 0;
}
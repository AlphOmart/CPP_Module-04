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
	//me->unequip(0);

	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->getInventory();
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->equip(src->createMateria("ice"));
	me->equip(src->createMateria("ice"));
	me->equip(src->createMateria("cure"));
	me->equip(src->createMateria("cure"));
	me->getInventory();
	me->unequip(0);
	me->getInventory();
	me->equip(src->createMateria("cure"));
	me->getInventory();
	me->use(0, *bob);

	delete bob;
	delete me;
	delete src;
	return 0;
}
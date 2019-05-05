#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* zaz = new Character("zaz");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	zaz->equip(tmp);
	tmp = src->createMateria("cure");
	zaz->equip(tmp);
	ICharacter* bob = new Character("bob");
	zaz->use(0, *bob);
	zaz->use(1, *bob);

	tmp = src->createMateria("ice");
	zaz->equip(tmp->clone());
	zaz->use(2, *bob);

	AMateria *cure = new Cure();
	src->learnMateria(cure->clone());
	src->learnMateria(cure->clone());
	src->learnMateria(cure->clone());
	zaz->equip(cure->clone());
	zaz->equip(cure->clone());
	zaz->equip(cure->clone());
	zaz->equip(cure->clone());

	zaz->use(3, *bob);
	zaz->use(4, *bob);
	zaz->use(5, *bob);
	zaz->use(6, *bob);
	zaz->use(7, *bob);
	// zaz->use(3, *bob);
	delete bob;
	delete zaz;
	delete src;

	return 0;
}

#include "IAsteroid.hpp"
#include "IMiningLaser.hpp"
#include "BocalSteroid.hpp"
#include "AsteroBocal.hpp"
#include "StripMiner.hpp"
#include "DeepCoreMiner.hpp"
#include "MiningBarge.hpp"

int main()
{
	MiningBarge*	bag = new MiningBarge();
	IMiningLaser*	strip = new	StripMiner();
	IMiningLaser*	deep = new	DeepCoreMiner();
	IMiningLaser*	strip1 = new	StripMiner();
	IMiningLaser*	deep1 = new	DeepCoreMiner();
	IAsteroid*		bocal = new BocalSteroid();
	IAsteroid*		astero = new AsteroBocal();

	bag->equip(strip);
	bag->equip(deep);
	bag->equip(strip1);
	bag->equip(deep1);
	bag->mine(bocal);
	bag->mine(astero);

	return (0);
}

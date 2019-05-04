#ifndef A_WEAPON_H
# define A_WEAPON_H

#include <iostream>
#include <string>

class AWeapon
{
	private:
		std::string _name;
		int	_apcost;
		int	_damage;

	public:
		AWeapon() {};
		AWeapon(std::string const & name, int apcost, int damage);
		virtual ~AWeapon();
		AWeapon(AWeapon & other);

		AWeapon&	operator=(AWeapon const & other);

		std::string virtual getName() const;
		int getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;

};

#endif

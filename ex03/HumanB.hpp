#pragma once

#include "Weapon.hpp"
#include <string>

class HumanB
{
private:
	std::string name;
	Weapon weapon;
public:
	HumanB( std::string name );
	void attack() const;
	void setWeapon( Weapon& weapon );
};
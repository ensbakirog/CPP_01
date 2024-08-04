#pragma once

#include "Weapon.hpp" 

class HumanB
{
private:
	std::string name;
	Weapon Weapon;
public:
	HumanB();
	~HumanB();
	void attack() const;
};
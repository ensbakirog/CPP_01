#pragma once

#include "Weapon.hpp" 

class HumanA
{
private:
	std::string name;
	Weapon weaponA;
public:
	HumanA();
	HumanA( std::string name,);
	~HumanA();
	void attack() const;
};
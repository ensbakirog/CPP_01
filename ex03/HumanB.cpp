#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB( std::string name ) : name(name) {}

void HumanB::attack() const {
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}

void HumanB::setWeapon( Weapon& weapon ) {
	this->weapon = weapon;
}
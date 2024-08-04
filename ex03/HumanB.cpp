#include "HumanB.hpp"

void HumanB::attack() const
{
	std::cout << name << " attacks with their " << Weapon.getType() << std::endl;
}
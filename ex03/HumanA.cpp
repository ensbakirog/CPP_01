#include "HumanA.hpp"

void HumanA::attack() const
{
	std::cout << name << " attacks with their " << Weapon.getType() << std::endl;
}

HumanA::HumanA() : name("") {}

HumanA::HumanA( std::string name) : name(name) {}

HumanA::~HumanA() {}

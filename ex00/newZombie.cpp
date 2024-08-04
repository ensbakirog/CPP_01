#include "Zombie.hpp"
#include <new>

Zombie* newZombie( std::string name )
{
	try
	{
		Zombie *ptr = new Zombie(name);
		return ptr;
	}
	catch(const std::bad_alloc& exp)
	{
		std::cerr << exp.what() << std::endl;
		return NULL;
	}
}
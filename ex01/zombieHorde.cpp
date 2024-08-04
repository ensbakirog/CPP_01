#include "Zombie.hpp"
#include <iostream>
#include <new>

Zombie* zombieHorde(int N, std::string name)
{
	try
	{
		Zombie* arrayOfZombie = new Zombie[N];

		for (int i = 0; i < N; ++i)
			new (&arrayOfZombie[i]) Zombie(name);
		
		return arrayOfZombie;
	}
	catch (const std::bad_alloc& exp)
	{
		std::cerr << "Memory allocation failed: " << exp.what() << std::endl;
		return nullptr;
	}
}
#pragma once

#define COUNT 4
#include <iostream>

class Zombie
{
private:
	std::string name;
public:
	Zombie( void );
	Zombie( std::string name );
	~Zombie();
	void announce( void );
};

Zombie* zombieHorde( int N, std::string name );
#include "Zombie.hpp"

int main( void )
{
	Zombie *ptr;
	ptr = newZombie("Enes");
	if (ptr == NULL)
		return EXIT_FAILURE;
	ptr->announce();
	delete ptr;

	randomChump("Rose");
	
	return EXIT_SUCCESS;
}
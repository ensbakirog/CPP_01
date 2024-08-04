#include "Zombie.hpp"

int main( void )
{
	Zombie *array = zombieHorde(COUNT, "Enes");
	if (array == NULL)
		return EXIT_FAILURE;

	for (size_t i = 0; i < COUNT; i++)
		array[i].announce();

	return (delete[] array, EXIT_SUCCESS);
}
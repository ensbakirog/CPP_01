#include "Harl.hpp"
#include <cstdlib>

int main(void)
{
	Harl harl;

	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
	
	return EXIT_SUCCESS;
}

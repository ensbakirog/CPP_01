#include "Harl.hpp"
#include <cstdlib>
#include <iostream>

int main(int argc, char const *argv[])
{
	if (argc != 2) 
        return (std::cerr << ARG_USAGE << std::endl, EXIT_FAILURE);
	
	std::string level = argv[1];

	Harl harl;

	harl.complain(level);
	
	return EXIT_SUCCESS;
}
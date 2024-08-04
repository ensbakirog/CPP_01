#define ARG_ERROR "ERROR!\n./replace <filename> <string_1> <string_2>"
#define FILE_ERROR "ERROR!\nFile is not opened"

#include <fstream>
#include <iostream>
#include <sstream>

int main(int argc, char const *argv[])
{
	if (argc != 4)
		return(std::cout << ARG_ERROR << std::endl, EXIT_FAILURE);

	std::string name = argv[1];

	std::ifstream file(name);
	if (!file.is_open())
		return(std::cout << FILE_ERROR << std::endl, EXIT_FAILURE);
	
	std::ofstream replaced_file(name + ".replace");
	if (!replaced_file.is_open())
		return(std::cout << FILE_ERROR << std::endl, file.close(), EXIT_FAILURE);
	
	std::ostringstream tmp;
	tmp << file.rdbuf(); // transfer file data to var
	std::string text = tmp.str(); // transfer data's string to string var

	return (file.close(), replaced_file.close(), EXIT_SUCCESS);
}

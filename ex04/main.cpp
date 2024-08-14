#include <iostream>
#include <fstream>
#include <cstdlib>

#define ARG_ERR "Error: ./NameOfProgram <NameOfFile> <String_1> <String_2>\n"
#define FILE_ERR "Error: Can not open the file\n"

void Replacer(std::string str, std::string old_str, std::string new_str, std::ofstream& file)
{
	size_t pos = str.find(old_str);
	if (pos != std::string::npos)
	{
		file << str.substr(0, pos) << new_str;
		Replacer(str.substr(pos + old_str.length()), old_str, new_str, file);
	}
	else
		file << str;
}

int main(int argc, char const *argv[])
{
	if (argc != 4)
		return (std::cerr << ARG_ERR, EXIT_FAILURE);

	std::string DestFileName = argv[1];

	if (DestFileName.find(".") != std::string::npos)
		DestFileName = DestFileName.substr(0, DestFileName.find("."));
	DestFileName.append(".replace");

	std::ifstream SourceFile(argv[1]);
	if (!SourceFile.is_open())
		return (std::cerr << FILE_ERR, EXIT_FAILURE);

	std::ofstream DestFile(DestFileName.c_str());
	if (!DestFile.is_open())
		return (SourceFile.close(), std::cerr << FILE_ERR, EXIT_FAILURE);
	
	std::string line;
	std::string old_string = argv[2];
	std::string new_string = argv[3];
	while (std::getline(SourceFile, line))
	{
		if (line.find(old_string) == std::string::npos)
		{
			if (!SourceFile.eof())
				DestFile << line << std::endl;
		}
		else
		{
			Replacer(line, old_string, new_string, DestFile);
			if (!SourceFile.eof())
				DestFile << std::endl;
		}
	}
	return (SourceFile.close(), DestFile.close(), EXIT_SUCCESS);
}
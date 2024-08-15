#pragma once

#include <string>

#define MEMBER_FUNC_COUNT 4

#define RESET       "\033[0m"
#define WHITE_BOLD  "\033[37;1m"
#define RED_BOLD    "\033[31;1m"
#define GREEN_BOLD  "\033[32;1m"
#define YELLOW_BOLD "\033[33;1m"

class Harl
{
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
	public:
		Harl( void );
		~Harl( void );
		void complain( std::string level );
};
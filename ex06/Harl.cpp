#include "Harl.hpp"
#include <iostream>

Harl::Harl( void ) {}

Harl::~Harl( void ) {}

void Harl::debug(void) {
    std::cout << WHITE_BOLD << "[ DEBUG ]" << RESET << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
    std::cout << std::endl;
}

void Harl::info(void) {
    std::cout << WHITE_BOLD << "[ INFO ]" << RESET << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
    std::cout << std::endl;
}

void Harl::warning(void) {
    std::cout << WHITE_BOLD << "[ WARNING ]" << RESET << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
    std::cout << std::endl;
}

void Harl::error(void) {
    std::cout << WHITE_BOLD << "[ ERROR ]" << RESET << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
    std::cout << std::endl;
}

void ErrorMsg( std::string level ) {
    std::cout << WHITE_BOLD << level << RESET << " is invalid level" << std::endl;
}

void Harl::complain( std::string level ) {
    void (Harl::*arrayOfFunctions[MEMBER_FUNC_COUNT])() = {&Harl::error, &Harl::warning, &Harl::info, &Harl::debug};
    std::string arrayOfLevels[MEMBER_FUNC_COUNT] = {"ERROR", "WARNING", "INFO", "DEBUG"};

    int i;
    for (i = 0; i < MEMBER_FUNC_COUNT && level != arrayOfLevels[i]; i++);

    for (; i >= 0 ; i--)
    {
        switch (i)
        {
        case 0:
                (this->*arrayOfFunctions[0])();
                break;
        case 1:
                (this->*arrayOfFunctions[1])();
                break;
        case 2:
                (this->*arrayOfFunctions[2])();
                break;
        case 3:
                (this->*arrayOfFunctions[3])();
                break;
        case 4:
                std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
                i = -1;
                break;
        }
    }
}
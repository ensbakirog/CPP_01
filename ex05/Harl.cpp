#include "Harl.hpp"
#include <iostream>

Harl::Harl( void ) {
    std::cout << "Harl has been" << GREEN_BOLD << " created" << RESET << std::endl;
}

Harl::~Harl( void ) {
    std::cout << "Harl has been" << RED_BOLD << " deleted" << RESET << std::endl;
}

void Harl::debug(void) {
    std::cout << WHITE_BOLD << "DEBUG:" << RESET << " I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {
    std::cout << WHITE_BOLD << "INFO:" << RESET << " I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) {
    std::cout << WHITE_BOLD << "WARNING:" << RESET << " I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void) {
    std::cout << WHITE_BOLD << "ERROR:" << RESET << " This is unacceptable! I want to speak to the manager now." << std::endl;
}

void ErrorMsg( std::string level ) {
    std::cerr << WHITE_BOLD << level << RESET << " is invalid level" << std::endl;
}

void Harl::complain( std::string level ) {
    void (Harl::*arrayOfFunctions[MEMBER_FUNC_COUNT])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string arrayOfLevels[MEMBER_FUNC_COUNT] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    size_t i;
    for (i = 0; i < MEMBER_FUNC_COUNT && level != arrayOfLevels[i]; i++);

    (i < MEMBER_FUNC_COUNT) ? ((this->*arrayOfFunctions[i])()) : ErrorMsg( level );
}
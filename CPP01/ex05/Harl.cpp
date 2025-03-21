/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquero <mquero@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 12:47:05 by mquero            #+#    #+#             */
/*   Updated: 2025/03/18 18:04:16 by mquero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;

}
void Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;

}
void Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;

}

static int get_level(std::string level)
{
    if (level == "DEBUG")
        return DEBUG;
    if (level == "INFO")
        return INFO;
    if (level == "WARNING")
        return WARNING;
    if (level == "ERROR")
        return ERROR;
    return -1;
}
void Harl::complain(std::string level)
{
    void (Harl::*debugPtr)() = &Harl::debug;
    void (Harl::*infoPtr)() = &Harl::info;
    void (Harl::*warningPtr)() = &Harl::warning;
    void (Harl::*errorPtr)() = &Harl::error;

    int i = get_level(level);
    switch (i)
    {
    case 0:
        (this->*debugPtr)();
        break;
    case 1:
        (this->*infoPtr)();
        break;
    case 2:
        (this->*warningPtr)();
        break;
    case 3:
        (this->*errorPtr)();
        break;
    default:
        std::cout << "Wrong level input" << std::endl;
        break;
    }
}
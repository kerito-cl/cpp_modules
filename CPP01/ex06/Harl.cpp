/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquero <mquero@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 12:47:05 by mquero            #+#    #+#             */
/*   Updated: 2025/03/27 10:43:35 by mquero           ###   ########.fr       */
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

void Harl::complain(std::string level)
{
    
      std::string arr[] = {"DEBUG","INFO", "WARNING", "ERROR"};
      int i = 0;
      while (arr[i] != level && i < 4)
        i++;
    if (i < 4)
        std::cout <<"[ "<< arr[i] <<" ]" <<std::endl;

    void (Harl::*ptrArr[])() = {&Harl::debug, &Harl::info, &Harl::warning,&Harl::error};

    switch (i)
    {
    case 0:
        (this->*ptrArr[0])();
    case 1:
        (this->*ptrArr[1])();
    case 2:
        (this->*ptrArr[2])();
    case 3:
        (this->*ptrArr[3])();
        break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        break;
    }
}
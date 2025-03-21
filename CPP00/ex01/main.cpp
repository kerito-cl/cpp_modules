/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquero <mquero@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 12:10:42 by mquero            #+#    #+#             */
/*   Updated: 2025/03/18 10:29:16 by mquero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <string>

bool has_digit(const std::string& str)
{
    std::string::size_type i = 0;

    while (i < str.length())
    {
        if (!isdigit(str[i]))
        {
            std::cout << "ONLY NUMBERS FROM 0 TO 8!!!" << std::endl;
            return false;
        }
        i++;
    }
    if (str.length() > 1)
    {
        std::cout << "WRONG INDEX!!!" << std::endl;
        return false;
    }
    return true;
}
void    displaygrid(Phonebook phonebook, int index)
{
    int i = 0;
    std::string firstname, lastname, nickname;

    std::cout << std::setw(10) << "INDEX" << "|";
    std::cout << std::setw(10) << "FIRST NAME" << "|";
    std::cout << std::setw(10) << "LAST NAME" << "|";
    std::cout << std::setw(10) << "NICK NAME" << "|" << std::endl;
    while (i < index)
    {   
        firstname = phonebook.contacts[i].getFirstName();
        if (firstname.length() > 10)
            firstname.replace(9,1, ".");
        lastname =phonebook.contacts[i].getLastName();
        if (lastname.length() > 10)
            lastname.replace(9,1, ".");
        nickname = phonebook.contacts[i].getNickname();
        if (nickname.length() > 10)
            nickname.replace(9,1, ".");
        std::cout << std::setw(10) << i << "|";
        std::cout << std::setw(10) << firstname.substr(0, 10) << "|";
        std::cout << std::setw(10)<< lastname.substr(0, 10) << "|";
        std::cout << std::setw(10) <<  nickname.substr(0, 10) << "|" << std::endl;
        i++;
    }
}

int main(void)
{
    Phonebook phonebook;
    std::string input, num, firstname, lastname, nickname, secret, ind;
    int index, len;
    index = 0;
    len = 0;

    while (input != "EXIT")
    {
        std::cout << "TYPE ADD, SEARCH OR EXIT:";
        std::getline(std::cin, input);
        if (std::cin.eof())
            break;
        if (input == "ADD")
        {
            std::cout << "First Name: ";
            std::getline(std::cin, firstname, '\n');
            if (std::cin.eof())
                break;
            if (firstname == "")
                continue;
            std::cout << "Last Name: ";
            std::getline(std::cin, lastname, '\n');
            if (std::cin.eof())
                break;
            if (lastname == "")
                continue;
            std::cout << "Phone Number: ";
            std::getline(std::cin, num, '\n');
            if (std::cin.eof())
                break;
            if (num == "")
                continue;
            std::cout << "Nickname: ";
            std::getline(std::cin, nickname, '\n');
            if (std::cin.eof())
                break;
            if (nickname == "")
                continue;
            std::cout << "Darkest secret: ";
            std::getline(std::cin, secret, '\n');
            if (std::cin.eof())
                break;
            if (secret == "")
                continue;
            phonebook.addContact(firstname, lastname, num, nickname, secret);
            index++;
            if (len < 8)
                len++;
            if (index > 7)
                index = 0;
        }
        else if (input == "SEARCH")
        {
            displaygrid(phonebook, len);
            std::cout << "TYPE INDEX TO GET INFO:";
            std::getline(std::cin, ind);
            if (std::cin.eof())
                break;
            while (ind == "")
            {
                std::cout << "TYPE INDEX TO GET INFO:";
                std::getline(std::cin, ind, '\n');
                if (std::cin.eof())
                    break;
            }
            if (!has_digit(ind))
                continue;
            if (stoi(ind) < len && stoi(ind) >= 0) 
            {
                std::cout << "First Name: "<< phonebook.contacts[stoi(ind)].getFirstName() << std::endl;
                std::cout << "Last Name: "<< phonebook.contacts[stoi(ind)].getLastName() << std::endl;
                std::cout << "Number : "<< phonebook.contacts[stoi(ind)].getNum() << std::endl;
                std::cout << "Nick Name: "<< phonebook.contacts[stoi(ind)].getNickname() << std::endl;
                std::cout << "Darkest Secret: "<< phonebook.contacts[stoi(ind)].getSecret() << std::endl;
            }
            else
                std::cout << "WRONG INDEX!!!" << std::endl;
        }
    }
}

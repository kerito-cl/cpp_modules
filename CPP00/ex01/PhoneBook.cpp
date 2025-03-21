/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquero <mquero@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 10:37:31 by mquero            #+#    #+#             */
/*   Updated: 2025/02/19 09:58:38 by mquero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void Phonebook::addContact(std::string fname, std::string lname, 
    std::string num, std::string nick, std::string secret)
{
    static int index = 0;
    if (index > 7) 
        index = 0;
    contacts[index].setFirstName(fname);
    contacts[index].setLastName(lname);
    contacts[index].setNum(num);
    contacts[index].setNickname(nick);
    contacts[index].setSecret(secret);
    index++;
}
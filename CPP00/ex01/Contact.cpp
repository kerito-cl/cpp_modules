/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquero <mquero@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 12:41:24 by mquero            #+#    #+#             */
/*   Updated: 2025/03/13 15:07:36 by mquero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setNum(std::string number)
{
    this->number = number;
}
void Contact::setFirstName(std::string firstname)
{
    this->firstName = firstname;
}
void Contact::setLastName(std::string lastname)
{
    this->lastName = lastname;
}
void Contact::setNickname(std::string nickname)
{
    this->nickname = nickname;
}
void Contact::setSecret(std::string secret)
{
    this->darkestSecret = secret;
}
std::string Contact::getNum()
{
    return (this->number);
}
std::string Contact::getFirstName()
{
    return (this->firstName);
}
std::string Contact::getLastName()
{
    return (this->lastName);
}
std::string Contact::getSecret()
{
    return (this->darkestSecret);
}
std::string Contact::getNickname()
{
    return (this->nickname);
}
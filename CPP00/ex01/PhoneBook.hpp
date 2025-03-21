/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquero <mquero@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 10:47:56 by mquero            #+#    #+#             */
/*   Updated: 2025/02/19 09:58:45 by mquero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

#include "Contact.hpp"

class Phonebook
{
    public:
        Contact contacts[8];
        void addContact(std::string fname, std::string lname, 
        std::string num, std::string nick, std::string secret);
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquero <mquero@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 10:55:03 by mquero            #+#    #+#             */
/*   Updated: 2025/02/19 14:25:22 by mquero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

#include <iostream>
#include <string>

class Contact
{
    private:
        std::string firstName;
        std::string lastName;
        std::string number;
        std::string nickname;
        std::string darkestSecret;
    public:
        void setNum(std::string num);
        void setFirstName(std::string firstname);
        void setLastName(std::string lastname);
        void setSecret(std::string secret);
        void setNickname(std::string nickname);
        std::string getNum();
        std::string getFirstName();
        std::string getLastName();
        std::string getSecret();
        std::string getNickname();
};

#endif
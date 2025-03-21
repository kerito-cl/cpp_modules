/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquero <mquero@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 16:08:23 by mquero            #+#    #+#             */
/*   Updated: 2025/03/14 12:43:59 by mquero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_HPP
#define WEAPON_CLASS_HPP

#include <iostream>
#include <string>

class Weapon
{
private:
    std::string type;
public:
    Weapon(std::string type) {setType(type);}
    const std::string getType();
    void setType(std::string type);
};

#endif
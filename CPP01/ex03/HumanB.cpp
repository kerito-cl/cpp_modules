/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquero <mquero@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 16:34:36 by mquero            #+#    #+#             */
/*   Updated: 2025/03/14 12:38:26 by mquero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack()
{
    std::cout << name << "attacks with their " << weapon->getType() << std::endl;
}


void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}
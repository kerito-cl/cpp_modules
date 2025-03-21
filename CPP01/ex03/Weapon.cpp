/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquero <mquero@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 16:16:38 by mquero            #+#    #+#             */
/*   Updated: 2025/03/13 16:20:23 by mquero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


const std::string Weapon::getType()
{
    return this->type;
}
void Weapon::setType(std::string type)
{
    this->type = type;
}
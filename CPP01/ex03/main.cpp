/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquero <mquero@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 11:49:45 by mquero            #+#    #+#             */
/*   Updated: 2025/03/14 12:59:48 by mquero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Weapon.hpp"
#include "HumanB.hpp"
#include "HumanA.hpp"

int main()
{
    {
        Weapon club = Weapon("Pistol");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("Knife");
        bob.attack();
    }
    {
        Weapon club = Weapon("Shotgun");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("Nunchaku");
        jim.attack();
    }
return 0;
}
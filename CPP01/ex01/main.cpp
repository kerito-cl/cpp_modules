/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquero <mquero@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 11:49:45 by mquero            #+#    #+#             */
/*   Updated: 2025/03/11 14:19:04 by mquero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"



void announce_all(Zombie *zombieArr, int n)
{
    int  i = 0;

    while (i < n)
    {
        zombieArr[i].announce();
        i++;
    }

}

int main(void)
{
    Zombie *zombieArr = zombieHorde(100, "Kerito");
    announce_all(zombieArr,100);

    delete[] zombieArr;
    return 0;
}

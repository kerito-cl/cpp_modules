/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquero <mquero@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 11:45:38 by mquero            #+#    #+#             */
/*   Updated: 2025/03/11 14:19:47 by mquero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
     Zombie *zombieArr = new Zombie[N];
    int  i = 0;

    while (i < N)
    {
        zombieArr[i] = Zombie(name);
        i++;
    }
    return zombieArr;
}
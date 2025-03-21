/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquero <mquero@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 11:49:45 by mquero            #+#    #+#             */
/*   Updated: 2025/03/11 13:43:28 by mquero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie** zombieArray()
{
    Zombie **zombieArr = new Zombie*[10];
    int  i = 0;
    //zombieArr = NULL;
    while (i < 10)
    {
        zombieArr[i] = newZombie("Zombie");
        zombieArr[i]->announce();
        i++;
    }
    return zombieArr;
}

void deleteArray(Zombie **zombieArr)
{
    int  i = 0;

    while (i < 10)
    {
        delete zombieArr[i];
        i++;
    }
    delete[] zombieArr;


}

int main(void)
{
    Zombie zombie("Foo");
    Zombie kerozombie;
    Zombie  *allocatedZombie;

    zombie.announce();
    kerozombie.announce();
    allocatedZombie = newZombie("Allocated");
    allocatedZombie->announce();
    randomChump("Tester");

    std::cout << "-----------------------------" << std::endl;

    Zombie **zombieArr = zombieArray();
    deleteArray(zombieArr);

    delete allocatedZombie;
    return 0;
}

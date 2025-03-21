/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquero <mquero@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 11:46:11 by mquero            #+#    #+#             */
/*   Updated: 2025/03/11 13:21:52 by mquero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_CLASS_HPP
#define ZOMBIE_CLASS_HPP

#include <iostream>
#include <string>


class Zombie
{
    private:
        std::string name;
    public:
        Zombie(std::string zombie_name) { name = zombie_name;}
        Zombie() { name = "Kerito";}

        void announce(void);
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );


#endif
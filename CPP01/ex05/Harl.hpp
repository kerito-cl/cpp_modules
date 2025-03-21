/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquero <mquero@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 11:46:11 by mquero            #+#    #+#             */
/*   Updated: 2025/03/18 17:07:19 by mquero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HARL_CLASS_HPP
#define HARL_CLASS_HPP

#include <iostream>
#include <string>

typedef enum e_level
{
    DEBUG,
    INFO,
    WARNING,
    ERROR,
}   t_level;

class Harl
{
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
    public:
        void complain( std::string level );
};



#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquero <mquero@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 12:43:40 by mquero            #+#    #+#             */
/*   Updated: 2025/03/27 10:43:09 by mquero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


int main(int argc, const char **argv)
{
    if (argc != 2)
        return 0;

    Harl harl;
    std::string str = argv[1];

    harl.complain(str);
    return 0;
}

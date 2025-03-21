/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquero <mquero@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 12:43:40 by mquero            #+#    #+#             */
/*   Updated: 2025/03/18 17:31:37 by mquero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl harl;

    harl.complain("INFO");
    std::cout << "--------------------------" << std::endl;
    harl.complain("WARNING");
    std::cout << "--------------------------" << std::endl;
    harl.complain("ERROR");
    std::cout << "--------------------------" << std::endl;
    harl.complain("DEBUG");
    std::cout << "--------------------------" << std::endl;
    harl.complain("DEBfsdfd");
    
    return 0;
}

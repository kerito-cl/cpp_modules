/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquero <mquero@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 11:49:45 by mquero            #+#    #+#             */
/*   Updated: 2025/03/13 16:03:50 by mquero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string Brain = "HI THIS IS THE BRAIN";
    std::string *stringPTR = &Brain;
    std::string& stringREF = Brain;
    std::cout << "Memory Address of variables : " << std::endl;

    std::cout << &Brain << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;

    std::cout << "--------------------------" << std::endl;

    std::cout << "Value of variables : " << std::endl;
    std::cout << Brain << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;

    return 0;
}

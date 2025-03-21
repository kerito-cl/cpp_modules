/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquero <mquero@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:23:29 by mquero            #+#    #+#             */
/*   Updated: 2025/03/18 10:54:04 by mquero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char const *argv[])
{
    int i = 1;
    int j = 0;

    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << "\n";
        return (0);
    }
    while (argv[i])
    {
        j = 0;
        while (argv[i][j])
        {
            putchar(toupper(argv[i][j]));
            j++;
        }
        i++;
    }
    std::cout << "\n";
    return (0);
}

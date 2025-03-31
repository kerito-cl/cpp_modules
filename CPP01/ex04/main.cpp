/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquero <mquero@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 11:49:45 by mquero            #+#    #+#             */
/*   Updated: 2025/03/31 19:51:52 by mquero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>


int main(int argc, char const *argv[])
{
    if (argc != 4) {
        std::cerr << "Wrong input " << argv[0] << std::endl;
        return 1;
    }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    std::ifstream inputFile(filename);
    if (!inputFile) {
        std::cerr << "Cannot open file " << argv[0] << std::endl;
        return 1;
    }

    std::ofstream outputFile(filename + ".replace");
    if (!outputFile) {
        std::cerr << "Cannot create file " << argv[0] << std::endl;
        return 1;
    }
    std::string line;
    while (std::getline(inputFile, line)) 
    {
        size_t pos = line.find(s1);
        while (pos != std::string::npos) 
        {
            pos = line.find(s1,pos);
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            pos = line.find (s1, pos + s2.length()); 
        }
        outputFile << line << "\n";
    }
    inputFile.close();
    outputFile.close();
    return 0;
}
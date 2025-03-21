/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquero <mquero@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 11:49:45 by mquero            #+#    #+#             */
/*   Updated: 2025/03/18 12:40:42 by mquero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char const *argv[])
{
    if(argc < 2)
        return 0;
    std::string myText;
    std::ifstream MyReadFile(argv[1]);
    std::string file1 = argv[1];
    std::ofstream newFile(file1.append(".replace"));
    std::string cpyString =argv[3];
    std::string srcString =argv[2];
    std::string finalString = "";
    size_t pos = 0;
    size_t prev = 0;

    while (getline(MyReadFile, myText)) 
    {
        pos = myText.find(argv[2]);
        prev = 0;
        while (pos != std::string::npos)
        {
            finalString.append(myText, prev, prev - pos);
            finalString.append(cpyString, pos);
            prev = pos + srcString.length();
            pos = myText.find(argv[2], prev);
        }
        finalString.append(myText, prev, myText.length() - prev);
        finalString.append("\n");
    }
    newFile << finalString << std::endl;
    MyReadFile.close();
    newFile.close();
    return 0;
}
#include "ScalarConverter.hpp"

bool isChar(std::string str)
{
    bool is_char = false;
    if (str.length() == 1 && std::isprint(str[0]) && !isdigit(str[0]))
        is_char = true;
    return is_char;
}
bool isInt(std::string str)
{
    std::size_t i = 0;
    if (str[0] == '-' && isdigit(str[1]))
        i++;
    while (i < str.length())
    {
        if (isdigit(str[i]) == false)
            return false;
        i++;
    }
    try
    {
        stoi(str);
    }
    catch(const std::out_of_range& e)
    {
        return false;
    }
    
    return true;
}
bool isFloat(std::string str)
{
    int fcount = 0;
    int dotcount = 0;

    if (str == "-inff" || str == "+inff" || str == "nanf")
        return true;
    try
    {
        stof(str);
    }
    catch(const std::exception& e)
    {
        return false;
    }
    for (std::size_t i = 0; i < str.length(); i++)
    {
        if (str[i] == 'f')
            fcount++;
        else if (str[i] == '.')
            dotcount++;
        else if (!std::isdigit(str[i]))
            return false;
    }
    if (fcount != 1 || dotcount != 1)
        return false;
    if ((str.back() != 'f' || str.find('.') == std::string::npos))
    {
        return false;
    }
    return true; 
}
bool isDouble(std::string str)
{
    int dotcount = 0;

    if (str == "-inf" || str == "+inf" || str == "nan")
        return true;
    try
    {
        stod(str);
    }
    catch(const std::exception& e)
    {
        return false;
    }
    for (std::size_t i = 0; i < str.length(); i++)
    {
        if (str[i] == '.')
            dotcount++;
        else if (!std::isdigit(str[i]))
            return false;
    }
    if (dotcount != 1)
        return false;
    if ((str.find('.') == std::string::npos))
    {
        return false;
    }
    return true; 
}

void ScalarConverter::converter(const std::string str)
{
    char c = 0;
    int i = 0;
    float f = 0.0f;
    double d = 0.0;

    std::cout << std::fixed << std::setprecision(4);


    if (isChar(str) == true)
    {
        c = str[0];
        i = static_cast <int> (c);
        f = static_cast <float> (c);
        d = static_cast <double> (c);
    }
    else if (isInt(str) == true) 
    {
        i = std::stoi(str);
        c = i;
        f = static_cast <float> (i);
        d = static_cast <double> (i);
    }
    else if (isFloat(str) == true) 
    {
        f = stof(str);
        i = static_cast <int>(f);
        d = static_cast <double> (f);
        c = i;
    }
    else if (isDouble(str) == true) 
    {
        d = stod(str);
        i = static_cast <int>(d);
        f = static_cast <float> (d);
        c = i;
    }

    else
    {
        std::cout <<"Char: " << "impossible" << std::endl;
        std::cout <<"Int: " << "impossible" << std::endl;
        std::cout <<"Float: " << "impossible"<< std::endl;
        std::cout <<"Double: " << "impossible" << std::endl;
        return ;
    }

    if (std::isnan(f) || std::isinf(f))
        std::cout <<"Char: " << "Impossible" << std::endl;
    else if (isprint(c) && i < 127 && i > 32)
        std::cout <<"Char: " << c << std::endl;
    else
        std::cout <<"Char: " << "Non displayable" << std::endl;
    if (std::isnan(f) || std::isinf(f))
        std::cout <<"Int: " << "Impossible" << std::endl;
    else
        std::cout <<"Int: " << i << std::endl;
    std::cout <<"Float: " << f << "f" << std::endl;
    std::cout <<"Double: " << d << std::endl;


}
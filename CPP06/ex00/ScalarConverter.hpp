#ifndef SCALAR_CONVERTER_HPP
#define SCALAR_CONVERTER_HPP

#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

class ScalarConverter
{
    public:
        ScalarConverter(std::string str);
        ScalarConverter(const ScalarConverter &other);
        ScalarConverter &operator=(const ScalarConverter &other);
        ~ScalarConverter();
        static void converter(const std::string str);
};


#endif
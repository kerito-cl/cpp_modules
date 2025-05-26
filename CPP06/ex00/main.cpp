#include "ScalarConverter.hpp"

int main(int argc, char const *argv[])
{
    if (argc != 2)
    {
        std::cerr << "1 argument needed only!" << std::endl;
        return 1;
    }
    ScalarConverter::converter(argv[1]);
    return 0;
}

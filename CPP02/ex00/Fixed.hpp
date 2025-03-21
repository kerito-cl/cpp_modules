#include <iostream>

class Fixed
{
private:
    int fixedPt;
    static const int fractionalBits = 8;
public:
    Fixed();
    Fixed(const Fixed &cpy);
    Fixed& operator=(const Fixed& op);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);
};


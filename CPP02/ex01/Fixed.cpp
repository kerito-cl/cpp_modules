/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquero <mquero@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 11:32:56 by mquero            #+#    #+#             */
/*   Updated: 2025/04/08 20:40:40 by mquero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int intValue)
{
    std::cout << "Int constructor called" << std::endl;
    if (intValue > (std::numeric_limits<int>::max() >> _fractionalBits) ||
        intValue < (std::numeric_limits<int>::min() >> _fractionalBits))
    {
        std::cerr << "Overflow in Fixed(int) constructor!" << std::endl;
        _value = 0;
    }
    else
    {
        _value = intValue << _fractionalBits;
    }
}

Fixed::Fixed(const float floatValue)
{
    std::cout << "Float constructor called" << std::endl;
    float scaled = floatValue * (1 << _fractionalBits);
    if (scaled > static_cast<float>(std::numeric_limits<int>::max()) ||
        scaled < static_cast<float>(std::numeric_limits<int>::min()))
    {
        std::cerr << "Overflow in Fixed(float) constructor!" << std::endl;
        _value = 0;
    }
    else
    {
        _value = static_cast<int>(roundf(scaled));
    }
}

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called" << std::endl;
    _value = other._value;
}

Fixed& Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        _value = other.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat( void ) const
{
    return static_cast<float>(_value) / (1 << _fractionalBits);
}

int Fixed::toInt( void ) const
{
    return _value >> _fractionalBits;
}

int Fixed::getRawBits(void) const
{
    return _value;
}

void Fixed::setRawBits(int const raw)
{
    if (raw > std::numeric_limits<int>::max() || raw < std::numeric_limits<int>::min())
    {
        std::cerr << "Warning: setRawBits value out of bounds!" << std::endl;
        _value = 0;
    }
    else
    {
        _value = raw;
    }
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}
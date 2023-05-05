#include <iostream>
#include <cmath>
#include <string>

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
    public:
        Fixed();
        Fixed(const Fixed &fixed);
        //nuove
        Fixed(const int n);
        Fixed(const float fn);
        ~Fixed();
        Fixed &operator=(const Fixed &fixed);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        //nuove
        float toFloat( void ) const;
        int toInt( void ) const;
    private:
        int _fixedPointValue;
        static const int _fractionalBits = 8;
};

std::ostream & operator<<( std::ostream & o, Fixed const & i );

#endif
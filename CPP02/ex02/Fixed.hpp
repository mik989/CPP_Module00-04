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

        int operator>(Fixed const &fixed) const;
        int operator<(Fixed const &fixed) const;
        int operator>=(Fixed const &fixed) const;
        int operator<=(Fixed const &fixed) const;
        int operator==(Fixed const &fixed) const;
        int operator!=(Fixed const &fixed) const;

        Fixed operator+(Fixed const &fixed) const;
        Fixed operator-(Fixed const &fixed) const;
        Fixed operator*(Fixed const &fixed) const;
        Fixed operator/(Fixed const &fixed) const;

        Fixed &operator++(void);
        Fixed &operator--(void);
        Fixed operator++(int nb);
        Fixed operator--(int nb);

        static Fixed &min(Fixed &a, Fixed &b);
        static const Fixed &min(Fixed const &a, Fixed const &b);

        static Fixed &max(Fixed &a, Fixed &b);
        static const Fixed &max(Fixed const &a, Fixed const &b);

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
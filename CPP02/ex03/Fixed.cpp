#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    this->setRawBits(fixed.getRawBits());
}
Fixed::Fixed(const int n) : _fixedPointValue(n << _fractionalBits)
{
    std::cout << "Int constructor called" << std::endl;
}
Fixed::Fixed(const float fn) :  _fixedPointValue(std::roundf(fn * (1 << _fractionalBits)))
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->setRawBits(fixed.getRawBits());
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

// SET E GET BITS

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return(_fixedPointValue);
}

void    Fixed::setRawBits(int const raw)
{
    this->_fixedPointValue = raw;
}

// TOINT E TOFLOAT FUNCTIONS

int Fixed::toInt( void ) const
{
    return(this->_fixedPointValue >> _fractionalBits);
}

float Fixed::toFloat( void ) const
{
    return static_cast <float> (this->getRawBits()) / (1 << _fractionalBits);
}

// OPERATORI DI COMPARAZIONE

int Fixed::operator>(Fixed const &fixed) const 
{
    if((this->toFloat() > fixed.toFloat()));
        return 1;
    return 0;
}
int Fixed::operator<(Fixed const &fixed) const 
{
    if((this->toFloat() < fixed.toFloat()));
        return 1;
    return 0;
}
int Fixed::operator>=(Fixed const &fixed)const 
{
    if((this->toFloat() >= fixed.toFloat()));
        return 1;
    return 0;
}
int Fixed::operator<=(Fixed const &fixed)const 
{
    if((this->toFloat() <= fixed.toFloat()));
        return 1;
    return 0;
}
int Fixed::operator==(Fixed const &fixed)const 
{
    if((this->toFloat() == fixed.toFloat()));
        return 1;
    return 0;
}
int Fixed::operator!=(Fixed const &fixed)const 
{
    if((this->toFloat() != fixed.toFloat()));
        return 1;
    return 0;
}

// OPERATORI

Fixed Fixed::operator+(Fixed const &fixed) const
{
    Fixed ret((this->toFloat() + fixed.toFloat()));
    return ret;
}

Fixed Fixed::operator-(Fixed const &fixed) const
{
    Fixed ret ((this->toFloat() - fixed.toFloat()));
    return ret;
}

Fixed Fixed::operator*(Fixed const &fixed) const 
{
    Fixed ret ((this->toFloat() * fixed.toFloat()));
    return ret;
}

Fixed Fixed::operator/(Fixed const &fixed) const
{
    Fixed ret ((this->toFloat() / fixed.toFloat()));
    return ret;
}

// OPERATORI DI INCREMENTO E DECREMENTO PRE-POST

Fixed& Fixed::operator++(void)
{
    this->_fixedPointValue += 1;
    return(*this);
}

Fixed& Fixed::operator--(void)
{
    this->_fixedPointValue -= 1;
    return(*this);
}

Fixed Fixed::operator++(int )
{
    Fixed	temp = *this;
	this->_fixedPointValue += 1;
	return (temp);
}

Fixed Fixed::operator--(int )
{
    Fixed	temp = *this;
	this->_fixedPointValue -= 1;
	return (temp);
}

// FUNZIONI MIN E MAX

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if(a < b)
        return a;
    return b;
}
const Fixed & Fixed::min(Fixed const &a, Fixed const &b)
{
    if(a < b)
        return a;
    return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if(a < b)
        return b;
    return a;
}
const Fixed &Fixed::max(Fixed const &a, Fixed const &b)
{
    if(a < b)
        return b;
    return a;
}

// OSTREAM OVERLOAD

std::ostream & operator<<( std::ostream & o, Fixed const & i ) 
{
    o << i.toFloat();
    return (o);
}


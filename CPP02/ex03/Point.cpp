#include "Point.hpp"
#include "Fixed.hpp"
Point::Point(void) : _x(0), _y(0)
{
  return ;
}

Point::Point(Fixed const x, Fixed const y) : _x(x), _y(y)
{
  return ;
}

Point::Point(Point const & src)
{
  *this = src;
  return ;
}

Point::~Point(void)
{
  return ;
}

Point & Point::operator=(Point const & rhs)
{
  if (this != &rhs)
  {
    (Fixed)this->_x = rhs.get_x();
    (Fixed)this->_y = rhs.get_y();
  }
  return (*this);
}

Fixed Point::get_x(void) const
{
    return (this->_x);
}

Fixed Point::get_y(void) const
{
  return (this->_y);
}
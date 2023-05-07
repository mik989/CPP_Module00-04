#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class Point
{
  public:
    Point(void);
    Point(Fixed const x, Fixed const y);
    Point(Point const & src);
    ~Point(void);

    Point & operator=(Point const & rhs);

    Fixed get_x(void) const;
    Fixed get_y(void) const;

  private:
    Fixed _x;
    Fixed _y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point );

#endif
#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
    public:
        Point();
        Point(const float x, const float y);
        Point(Point &point);
        Point &operator=(const Point &point);
        ~Point();
    private:
        Fixed _x;
        Fixed _y;
}
bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif
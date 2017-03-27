#define _USE_MATH_DEFINES
#include <cmath>
#include "circle.hpp"

Circle::Circle(point_t pos, double radius) :
  Shape(pos),
  radius_(radius)
{
  if (radius < 0) radius_ = 0;
}

Circle::Circle() :
  radius_(0)
{
}

double Circle::getRadius() const
{
	return radius_;
}

double Circle::getArea() const
{
	return M_PI * pow(radius_, 2);
}

rectangle_t Circle::getFrameRect() const
{
  return { radius_*2, radius_*2, pos_ };
}

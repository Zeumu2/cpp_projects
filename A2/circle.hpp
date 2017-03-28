#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "shape.hpp"

class Circle : public Shape
{
public:
  Circle(point_t pos, double radius);
  Circle();

  double getRadius() const;
  double getArea() const;
  rectangle_t getFrameRect() const;
  void scale(double k);
  
private:
  double radius_;
};

#endif
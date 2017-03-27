#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "shape.hpp"

class Rectangle : public Shape
{
public:
  Rectangle(point_t pos, double width, double height);
  Rectangle();

  double getHeight() const;
  double getWidth() const;
  double getArea() const;
  rectangle_t getFrameRect() const;

private:
  double width_;
  double height_;
};

#endif

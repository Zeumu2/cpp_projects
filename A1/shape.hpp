#ifndef SHAPE_HPP
#define SHAPE_HPP

#include "base-types.hpp"

class Shape
{
public:
  Shape(point_t pos);
  Shape();

  virtual double getArea() const = 0;
  virtual rectangle_t getFrameRect() const = 0;
  void move(point_t pos);
  void move(double x, double y);
  
protected:
  point_t pos_; 
};

#endif

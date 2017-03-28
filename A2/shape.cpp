#include "shape.hpp"

Shape::Shape(point_t pos) :
  pos_(pos)
{
}

Shape::Shape()
{
  pos_ = point_t { 0,0 };
}

void Shape::move(point_t pos)
{
	pos_ = pos;
}

void Shape::move(double x, double y)
{
	pos_.x += x;
	pos_.y += y;
}

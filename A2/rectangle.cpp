#include "rectangle.hpp"

Rectangle::Rectangle(point_t pos, double width, double height) :
  Shape(pos),
  width_(width),
  height_(height)
{
  if (width < 0) width_ = 0;
  if (height < 0) height_ = 0;
}

Rectangle::Rectangle() :
  width_(0),
  height_(0)
{
}

double Rectangle::getHeight() const
{
  return height_;
}

double Rectangle::getWidth() const
{
  return width_;
}

double Rectangle::getArea() const
{
	return width_ * height_;
}

rectangle_t Rectangle::getFrameRect() const
{
  return { height_, width_, pos_ };
}

void Rectangle::scale(double k)
{
  if (k < 0) k = 1;
  width_ *= k;
  height_ *= k;
}
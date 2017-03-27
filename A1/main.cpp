#include <iostream>
#include "circle.hpp"
#include "rectangle.hpp"

void print_rectangle(Rectangle rectangle)
{
	std::cout << "Rectangle:" << std::endl;
	std::cout << "area = " << rectangle.getArea() << std::endl;
	std::cout << "width = " << rectangle.getWidth() << std::endl;
	std::cout << "height = " << rectangle.getHeight() << std::endl;
	std::cout << "position = (" << rectangle.getFrameRect().pos.x << "," << rectangle.getFrameRect().pos.x << ")\n" << std::endl;
}

void print_circle(Circle circle)
{
  rectangle_t c = circle.getFrameRect();
  std::cout << "Circle:" << std::endl;
  std::cout << "radius = " << circle.getRadius() << std::endl;
  std::cout << "area = " << circle.getArea() << std::endl;
  std::cout << "height of rect frame = " << c.height << std::endl;
  std::cout << "width of rect frame = " << c.width << std::endl;
  std::cout << "position = (" << c.pos.x << "," << c.pos.y << ")\n" << std::endl;
}

int main()
{
  point_t pos = { 10, 20 };
  Rectangle rectangle(pos, 5, 15);
  Rectangle rectangle1;
  Rectangle rectangle2(pos, -10, -1);
  Circle circle(pos, 3);
  Circle circle1;
  Circle circle2(pos, -2);

  print_rectangle(rectangle);
  print_rectangle(rectangle1);
  print_rectangle(rectangle2);
  print_circle(circle);
  print_circle(circle1);
  print_circle(circle2);

  pos.x = -5;
  pos.y = 20.5;
  rectangle.move(pos);
  print_rectangle(rectangle);

  circle.move(40, 25);
  print_circle(circle);

  return 0;
}

#define BOOST_TEST_MAIN
#define BOOST_TEST_DYN_LINK
#define _USE_MATH_DEFINES
#include <boost\test\unit_test.hpp>
#include <cmath>
#include "rectangle.hpp"
#include "circle.hpp"

BOOST_AUTO_TEST_SUITE(testSuiteCompareMove)

BOOST_AUTO_TEST_CASE(testCompareMoveRectangle)
{
  Rectangle rect(point_t{ 10,10 }, 10, 5);
  rect.move(2, -5);
  BOOST_CHECK_EQUAL(rect.getArea(), 50);
  BOOST_CHECK_EQUAL(rect.getWidth(), 10);
  BOOST_CHECK_EQUAL(rect.getHeight(), 5);
}

BOOST_AUTO_TEST_CASE(testCompareMoveCircle)
{
  Circle circle(point_t{ 0,10 }, 3);
  circle.move(point_t{ 3,2 });
  BOOST_CHECK_EQUAL(circle.getArea(), M_PI * pow(3, 2));
  BOOST_CHECK_EQUAL(circle.getRadius(), 3);
}

BOOST_AUTO_TEST_SUITE_END()

BOOST_AUTO_TEST_SUITE(testSuiteCompareScale)

BOOST_AUTO_TEST_CASE(testCompareScaleRectangle)
{
  Rectangle rect(point_t{}, 5, 15);
  rect.scale(0.5);
  BOOST_CHECK_EQUAL(rect.getArea(), (5 * 0.5)*(15 * 0.5));
}

BOOST_AUTO_TEST_CASE(testCompareScaleCircle)
{
  Circle circle(point_t{}, 10);
  circle.scale(2);
  BOOST_CHECK_EQUAL(circle.getArea(), M_PI * pow(10 * 2, 2));
}

BOOST_AUTO_TEST_SUITE_END()

BOOST_AUTO_TEST_SUITE(testSuiteInvalidParameters)

BOOST_AUTO_TEST_CASE(testInvalidParametersRectangle)
{
  Rectangle rect(point_t{ 2,-2 }, 10, 3);
  rect.scale(-2);
  BOOST_CHECK_EQUAL(rect.getWidth(), 10);
  BOOST_CHECK_EQUAL(rect.getHeight(), 3);
}

BOOST_AUTO_TEST_CASE(testInvalidParametersCircle)
{
  Circle circle(point_t{}, 3.2);
  circle.scale(-0.5);
  BOOST_CHECK_EQUAL(circle.getRadius(), 3.2);
}

BOOST_AUTO_TEST_SUITE_END()
#include "gpoint.h"
#include <gtest/gtest.h>
#include <iostream>

using namespace std;

TEST(Point, Empty_construtor)
{
	Point<int> B1(1,2);
	EXPECT_EQ(1, B1.quadrant());
}

TEST(Point, constructor)
{
	Point<int> B1(-1, 2);
	EXPECT_EQ(2, B1.quadrant());
}
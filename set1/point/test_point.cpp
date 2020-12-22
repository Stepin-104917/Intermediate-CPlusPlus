#include "point.h"
#include <gtest/gtest.h>
namespace {
TEST(Point, Empty_Cosnstructor) 
{
	Point B1;
	EXPECT_EQ(1, B1.isOrigin());
	EXPECT_EQ(1, B1.quadrant());
	EXPECT_EQ(1, B1.isOnXAxis());
	EXPECT_EQ(1, B1.isOnYAxis());
}

TEST(Point, Parameterized_Cosnstructor) {
	Point B1(1,2);
	EXPECT_EQ(1, B1.quadrant());
	EXPECT_EQ(0, B1.isOrigin());
	EXPECT_EQ(0, B1.isOnXAxis());
	EXPECT_EQ(0, B1.isOnYAxis());
}

TEST(Point, Parameterized_Cosnstructor1) {
	Point B2(1,-2);
	EXPECT_EQ(4, B2.quadrant());
	EXPECT_EQ(0, B2.isOrigin());
	EXPECT_EQ(0, B2.isOnXAxis());
	EXPECT_EQ(0, B2.isOnYAxis());
}

TEST(Point, Parameterized_refCosnstructor) {
	Point B1(-1,-2);
	Point B2 = B1;
	EXPECT_EQ(3, B2.quadrant());
	EXPECT_EQ(0, B2.isOrigin());
	EXPECT_EQ(0, B2.isOnXAxis());
	EXPECT_EQ(0, B2.isOnYAxis());
}

}

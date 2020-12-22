#include "triangle.h"
#include <gtest/gtest.h>
using namespace std;


TEST(Triangle, Connstructor) 
{
    Triangle C1(1, 2, 3);
    	
   	EXPECT_EQ(0, C1.area());
   	EXPECT_EQ(6, C1.circumference());
}




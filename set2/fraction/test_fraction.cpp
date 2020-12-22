#include "fraction.h"
#include <gtest/gtest.h>

TEST(Fraction, Empty_Cosnstructor) 
{
    	Fraction F1;
  	EXPECT_EQ(0, F1.isSimplest());
}

TEST(Fraction, Cosnstructor) 
{
    	Fraction F1(2,3);
    	Fraction F2(3,4);
    	Fraction F3;
    	F3 = F1 + F2;
	EXPECT_EQ(1, F3.isSimplest());
}

TEST(Fraction, Cosnstructor1) 
{
    	Fraction F1(2,10);
	EXPECT_EQ(0, F1.isSimplest());
}

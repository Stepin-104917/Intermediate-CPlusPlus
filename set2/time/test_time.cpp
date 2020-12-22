#include "time.h"
#include <gtest/gtest.h>
using namespace std;


TEST(MyTime, EmptyConnstructor) 
{
    	MyTime C1;
    	MyTime C2;
    	MyTime C3 = (C1 + C2);
    	
    	EXPECT_EQ(0, C3.gethr());
    	EXPECT_EQ(0, C3.getmin());
    	EXPECT_EQ(0, C3.getsec());
}

TEST(MyTime, plus_wiht_without) 
{
	MyTime C1(10,20,30);
    	MyTime C2(1,2,3);
    	
    	MyTime C3 = (C1 + C2);
    	
    	MyTime C5 = (C1 + 3);
    	
    	EXPECT_EQ(11, C3.gethr());
	EXPECT_EQ(22, C3.getmin());
	EXPECT_EQ(33, C3.getsec());
	
	EXPECT_EQ(10, C5.gethr());
	EXPECT_EQ(23, C5.getmin());
	EXPECT_EQ(30, C5.getsec());
	
}
    	
TEST(MyTime, Preincrement) 
{
    	MyTime C1(10,20,30);
    	    	
     	MyTime& C4 = ++C1;    	
    	
    	EXPECT_EQ(11, C4.gethr());
	EXPECT_EQ(21, C4.getmin());
	EXPECT_EQ(31, C4.getsec());
	
}

TEST(MyTime, postincrement) 
{
	MyTime C1(10,20,30);
    	    	
    	MyTime C3 = C1++;
    	
    	EXPECT_EQ(10, C3.gethr());
	EXPECT_EQ(20, C3.getmin());
	EXPECT_EQ(30, C3.getsec());
}
   
TEST(MyTime, equals) 
{
	MyTime C1(10,20,30);
    	MyTime C2(10,20,30);    	
    	  	
    	EXPECT_EQ(1, (C1 == C2));
}
	
TEST(MyTime, minus_with_without) 
{    	
	MyTime C1(10,20,30);
    MyTime C2(1,2,3);
    	
	MyTime C4 = (C1 - C2);
	
	MyTime C6 = (C1 - 3);
	
	EXPECT_EQ(9, C4.gethr());
	EXPECT_EQ(18, C4.getmin());
	EXPECT_EQ(27, C4.getsec());
	
	EXPECT_EQ(10, C6.gethr());
	EXPECT_EQ(17, C6.getmin());
	EXPECT_EQ(30, C6.getsec());
}

TEST(Complex, Ostream) 
{
    MyTime C1(10,20,30);
    MyTime C2(1,2, 4);
    std::cout <<"C1 = "<<C1 << "\nC2 = " << C2;
}



#include "distance.h"
#include <gtest/gtest.h>
using namespace std;


TEST(Distance, EmptyConnstructor) 
{
    	Distance C1;
    	Distance C2;
    	Distance C3 = (C1 + C2);
    	
    	EXPECT_EQ(0, C3.getfeet());
    	EXPECT_EQ(0, C3.getinch());
}

TEST(Distance, plus_wiht_without) 
{
	Distance C1(10,2);
    	Distance C2(1,2);
    	
    	Distance C3 = (C1 + C2);
    	
    	Distance C5 = (C1 + 3);
    	
    	EXPECT_EQ(11, C3.getfeet());
	EXPECT_EQ(4, C3.getinch());
		
	EXPECT_EQ(13, C5.getfeet());
	EXPECT_EQ(5, C5.getinch());

}

TEST(Distance, Preincrement) 
{
    	Distance C1(10,7);
    	    	
     	Distance& C4 = ++C1;    	
    	
    	EXPECT_EQ(11, C4.getfeet());
	EXPECT_EQ(8, C4.getinch());	
	
}

TEST(Distance, postincrement) 
{
	Distance C1(10,2);
    	    	
    	Distance C3 = C1++;
    	
    	EXPECT_EQ(10, C3.getfeet());
	EXPECT_EQ(2, C3.getinch());
}
   
TEST(Distance, equals) 
{
	Distance C1(10,2);
    	Distance C2(10,2);    	
    	  	
    	EXPECT_EQ(1, (C1 == C2));
}

TEST(Distance, minus_with_without) 
{    	
	Distance C1(10,2);
    	Distance C2(1,2);
    	
	Distance C4 = (C1 - C2);
	
	Distance C6 = (C1 - 1);
	
	EXPECT_EQ(9, C4.getfeet());
	EXPECT_EQ(0, C4.getinch());
	
	EXPECT_EQ(9, C6.getfeet());
	EXPECT_EQ(1, C6.getinch());

}

#include "currency.h"
#include <gtest/gtest.h>
using namespace std;

TEST(Currency, EmptyConnstructor) 
{
	Currency C1;
	Currency C2;
	Currency C3 = (C1 + C2);
    
	EXPECT_EQ(0, C3.getrupees());
	EXPECT_EQ(0, C3.getpaise());
}

TEST(Currency, plus_with_without) 
{
	Currency C1(10,20);
	Currency C2(1,2);
    	
	Currency C3 = (C1 + C2);
	Currency C5 = (C1 + 3);
    	
	EXPECT_EQ(11, C3.getrupees());
	EXPECT_EQ(22, C3.getpaise());
	
	EXPECT_EQ(13, C5.getrupees());
	EXPECT_EQ(23, C5.getpaise());
	
}
    	
TEST(Currency, Preincrement) 
{
    	Currency C1(10,20);
    
    	Currency& C4 = ++C1;    	
    	
    	EXPECT_EQ(11, C4.getrupees());
	EXPECT_EQ(21, C4.getpaise());
	
}

TEST(Currency, postincrement) 
{
	Currency C1(10,20);
    	    	
    	Currency C3 = C1++;
    	
    	EXPECT_EQ(10, C3.getrupees());
	EXPECT_EQ(20, C3.getpaise());
}
   
TEST(Currency, equals) 
{
	Currency C1(10,20);
    	Currency C2(10,20);    	
      	
    	EXPECT_EQ(1, (C1 == C2));
}
	
TEST(Currency, minus_with_without) 
{    	
	Currency C1(10,20);
    	Currency C2(1,2);
    	
	Currency C4 = (C1 - C2);
	
	Currency C6 = (C1 - 3);
	
	EXPECT_EQ(9, C4.getrupees());
	EXPECT_EQ(18, C4.getpaise());
	
	EXPECT_EQ(7, C6.getrupees());
	EXPECT_EQ(17, C6.getpaise());
}


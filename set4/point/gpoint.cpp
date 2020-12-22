#include "gpoint.h"
#include <iostream>
#include <gtest/gtest.h>
using namespace std;

template<typename T>
Point<T>:: Point(): m_x(0), m_y(0){}

template<typename T>
Point<T>:: Point(T x,T y): m_x(x), m_y(y){}

template<typename T>
void Point<T> :: distanceFromOrigin()
{
	return (srqt((m_x*m_x) + (m_y*m_y)));
	
}
template<typename T>
Quadrant Point<T> :: quadrant()
{
	if((m_x>=0)&&(m_y>=0))
	{
		return Q1;
	}
	else if ((m_x<=0)&&(m_y>=0))
	{
		return Q2;
	}
	else if ((m_x<=0)&&(m_y<=0))
	{
		return Q3;
	}
	else 
	{
		return Q4;
	}
}

template<typename T>
void Point<T> :: display()
{
	cout<< m_x << m_y << endl;
}

int main(int argc, char **argv)
{
	Point<int> p1(-1,2);
	Point<float> p2(1.1,2.2);
	p1.display();
	p2.display();
	std::cout<<p1.quadrant();
	std::cout<<p2.quadrant();
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
	return 0;
	
}

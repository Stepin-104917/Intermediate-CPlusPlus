#include "gcomplex.h"
#include <iostream>
#include <gtest/gtest.h>
using namespace std;

template<typename T>
Complex<T> :: Complex(): m_real(), m_image() {}

template<typename T>
Complex<T> :: Complex(T r, T i): m_real(r), m_image(i) {}

template<typename T>
void Complex<T> :: display()
{
	cout<< "real part: " << m_real << "imaginary parrt is: " << m_image << endl;
}

int main(int argc, char **argv)
{
	Complex<int> c1(1,2);
	Complex<float> c2(1.1, 2.2);
	c1.display();
	c2.display();
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
	return 0;
	
}

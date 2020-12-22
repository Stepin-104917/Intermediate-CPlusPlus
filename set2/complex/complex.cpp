#include "complex.h"
#include<iostream>
#include <gtest/gtest.h>

Complex::Complex():m_real(0),m_imag(0)
{
}
Complex::Complex(int r,int i):m_real(r),m_imag(i)
{
}
Complex::Complex(int val):m_real(val),m_imag(val)
{
}

Complex Complex::operator+(const Complex& ref)
{
    return Complex(this->m_real + ref.m_real, this->m_imag + ref.m_imag);
}
Complex Complex::operator-(const Complex& ref)
{
    return Complex(this->m_real - ref.m_real, this->m_imag - ref.m_imag);
}

Complex& Complex::operator++()
{
    m_real++;
    m_imag++;
    return *this;
}

//Post increment 
Complex Complex::operator++(int)
{
   Complex temp(m_real, m_imag);
   m_real++;
   m_imag++;
   return temp;
}

bool Complex::operator==(const Complex& ref)
{
    return ((m_real==ref.m_real)&&(m_imag == ref.m_imag));
}

std::ostream& operator <<(std::ostream& a, const Complex& b)
{
    a << b.m_real << " + " <<b.m_imag;
    return a;
}
int Complex::get_real()
{
    return m_real;
}
int Complex::get_img()
{
    return m_imag;
}

void Complex::dispay() const
{
    std::cout << " real " << m_real << " imaginary " << m_imag;
}

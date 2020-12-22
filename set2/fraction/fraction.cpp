#include "fraction.h"
#include <gtest/gtest.h>
using namespace std;

//constructor initialization
Fraction::Fraction():m_numerator(1),m_denominator(1){}
Fraction::Fraction(int n,int d):m_numerator(n),m_denominator(d){}
Fraction::Fraction(int num):m_numerator(num),m_denominator(num){}

//functions
Fraction Fraction::operator+(const Fraction& f1)
{
    return Fraction((this->m_numerator*f1.m_denominator)+(this->m_denominator*f1.m_numerator),this->m_denominator*f1.m_denominator);
}

Fraction Fraction::operator-(const Fraction& f2)
{
    return Fraction((this->m_numerator*f2.m_denominator)-(this->m_denominator*f2.m_numerator),this->m_denominator*f2.m_denominator);
}

Fraction Fraction::operator+(int num)
{
    return Fraction(this->m_numerator+(num*this->m_denominator),this->m_denominator);
}

Fraction Fraction::operator-(int val)
{
    return Fraction(this->m_numerator-(val*this->m_denominator),this->m_denominator);
}

bool Fraction::operator==(const Fraction& f3)
{
    return((m_numerator==f3.m_numerator)&&(m_denominator==f3.m_denominator));
}

bool Fraction::operator<(const Fraction& f4)
{
    return ((m_numerator/m_denominator)<(f4.m_numerator/f4.m_denominator));
}

bool Fraction::operator>(const Fraction& f5)
{
    return ((m_numerator/m_denominator)>(f5.m_numerator/f5.m_denominator));
}

Fraction Fraction::simplify()
{
    for(int i = m_numerator/1; i > 1; i--)
    {
        if((m_numerator%i == 0)&&(m_denominator%i == 0))
        {
            m_numerator/=i;
            m_denominator/=i;
            break;
        }
    }
    return Fraction(m_numerator,m_denominator);
}

bool Fraction::isSimplest() const
{
    return (m_denominator % m_numerator!=0);
}

void Fraction::dispay() const
{
    std::cout<<m_numerator<<"/"<<m_denominator<<endl;
}

std::ostream& operator<<(std::ostream& cout, const Fraction& f1)
{
    return cout<<f1.m_numerator<<"/"<<f1.m_denominator;
}

int main(int argc, char **argv)
{
    Fraction f1(2,3);
    Fraction f2(1,4);
    Fraction f3;
    f3=f1+f2;
    Fraction f5(2,10);
    f5.simplify();
    f5.dispay();
    f3.dispay();
    f1.dispay();
    std::cout<<f2;
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    return 0;
}
#include "distance.h"

Distance:: Distance(): m_feets(0), m_inches(0)
{
}
Distance:: Distance(int f,int i): m_feets(f), m_inches(i)
{
}
Distance:: Distance(int val): m_feets(val), m_inches(val)
{
}

Distance Distance::operator+(const Distance& a)
{
	int ft = m_feets + a.m_feets;
	int inch = m_inches + a.m_inches;
	
	if(inch >=12)
	{
		ft += inch/12;
		inch = inch %12;
	}
	return Distance(ft, inch);
}

Distance Distance::operator-(const Distance& b)
{
	int ft = m_feets - b.m_feets;
	int inch = m_inches - b.m_inches;
	return Distance(ft, inch);
	
}

Distance Distance::operator+(int val)
{
	int ft = m_feets + val;
	int inch = m_inches + val;
	
	if(inch >=12)
	{
		ft += inch/12;
		inch = inch %12;
	}
	return Distance(ft, inch);
}


Distance Distance::operator-(int val)
{
	int ft = m_feets - val;
	int inch = m_inches - val;
	return Distance(ft, inch);
}

Distance& Distance::operator++()
{
	m_feets++;
	m_inches++;
	return *this;
}

Distance Distance::operator++(int)
{
	Distance temp (m_feets, m_inches);
	m_feets++;
	m_inches++;
	return temp;
	
}

bool Distance::operator==(const Distance& ref)
{
	return ((m_feets == ref.m_feets) && (m_inches==ref.m_inches));
}

int Distance:: getfeet()
{
	return m_feets;
}

int Distance:: getinch()
{
	return m_inches;
}


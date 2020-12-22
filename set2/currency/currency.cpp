#include"currency.h"
#include<iostream>
#include <gtest/gtest.h>

Currency:: Currency (): m_rupees (0), m_paise (0)
{
}
Currency:: Currency(int r,int p) : m_rupees(r), m_paise(p)
{
}
Currency :: Currency(int val) : m_rupees(val), m_paise(val)
{
}
  
Currency Currency :: operator+(const Currency& b)
{
	int ru = m_rupees + b.m_rupees;
	int pa = m_paise + b.m_paise;
	
	if(pa >=100)
	{
		ru += pa/100;
		pa = pa%100;
	}
	
	return Currency(ru , pa);
}

Currency Currency :: operator-(const Currency& b)
{
	int ru = m_rupees - b.m_rupees;
	int pa = m_paise - b.m_paise;
	
	return Currency(ru , pa);
}

Currency Currency :: operator+(int c1)
{
	int ru = m_rupees + c1;
	int pa = m_paise + c1;
	
	if( pa >=100)
	{
		ru += pa/100;
		pa = pa%100;
	}
	
	return Currency(ru, pa);
}
Currency Currency :: operator-(int c2)
{
	int ru = m_rupees - c2;
	int pa = m_paise - c2;
	
	return Currency(ru, pa);
}
Currency& Currency :: operator++()
{
	m_rupees++;
	m_paise++;
	
	return *this;
}
Currency Currency :: operator++(int)
{
	Currency temp(m_rupees, m_paise);
	m_rupees++;
	m_paise++;
	return temp; 
	
}
bool Currency :: operator==(const Currency& ref)
{
	return (m_rupees==ref.m_rupees)&&(m_paise == ref.m_paise);
}

int Currency:: getrupees()
{
	return m_rupees;
}

int Currency:: getpaise()
{
	return m_paise;
}

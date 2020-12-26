#include "book.h"
#include<iostream>
#include<string>

using namespace std;

int Book:: isbn() const {return m_isbn;}

std:: string Book:: title() const {return m_title;}

std:: string Book:: author() const{return m_author;}

int Book:: year() const{return m_year;}

int Book:: price() const{return m_price;}

int Book:: pages() const{return m_pages;}

void Book :: display() const
{
	std:: cout << "ISBN: " << m_isbn << " title: " << m_title << " author: " << m_author << " published year: " << m_year << " price: " << m_price << " total pages: " << m_pages << endl;
}



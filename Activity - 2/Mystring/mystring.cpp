#include <cstring>
#include<string>
#include <iostream>
#include "mystring.h"
MyString::MyString() : m_buf(nullptr), m_len(0) {}
MyString::MyString(const char *pbuf) {
m_len = strlen(pbuf);
m_buf = new char[m_len + 1];
strcpy(m_buf, pbuf);
}
MyString::MyString(const MyString &ref) :
m_len(ref.m_len) {
m_buf = new char[m_len + 1];
strcpy(m_buf, ref.m_buf);
}
MyString::~MyString() {
if (m_len > 0) // m_buf != nullptr
delete[] m_buf;
}
MyString& MyString::operator=(const MyString &ref) {
if(this == &ref) return *this;
//self assignment check
if(m_buf!=nullptr) delete[] m_buf;
m_len = ref.m_len;
m_buf = new char[m_len + 1];
strcpy(m_buf, ref.m_buf);
return *this;
}
int MyString::length() const { return m_len; }
void MyString::display() const {
std::cout << m_buf << "\n";
}

MyString MyString::operator+(const MyString &ref)
{
    MyString temp;
    temp.m_len=m_len+ref.m_len;
    temp.m_buf=strcpy(m_buf,ref.m_buf);
    return temp;
}
MyString MyString::operator+(const char* s1)
{
    MyString temp;
    temp.m_len=m_len+strlen(s1);
    temp.m_buf=strcat(m_buf,s1);
    //std::cout<<temp.m_buf;
    return temp;
    
}
int MyString::operator==(const MyString &s1)
{
    int c=strcmp(m_buf,s1.m_buf);
    return c;
}
MyString& MyString::operator+=(const char*s1)
{   
    this->m_len=this->m_len+strlen(s1);
    this->m_buf=strcat(this->m_buf,s1);
    return *this;
   
}
int MyString::operator>(const MyString &s1)
{
    int c=strcmp(m_buf,s1.m_buf);
   
        return c;
}
std::ostream& operator<<(std::ostream& rout, const MyString& ref)
{
    rout << ref.m_buf;
       return rout;
}
std::istream& operator>>(std::istream &rin, MyString &ref)
{
  rin >> ref.m_len >> ref.m_buf;
  return rin;
}



#ifndef __MYSTRING_H
#define __MYSTRING_H



class MyString {
char *m_buf;
int m_len;
public:
MyString();
MyString(const char *);
MyString(const MyString &);
~MyString();
MyString& operator=(const MyString &);
int length() const;
void display() const ;
MyString operator+(const MyString &);
MyString operator+(const char*);
MyString& operator+=(const char*);
int operator==(const MyString &);
int operator>(const MyString &);
friend std::ostream& operator<<(std::ostream& , const MyString& );
friend std::istream& operator>>(std::istream &, MyString &);
};
#endif
#include<iostream>
#include"mystring.h"
#include"mystring.cpp"

int main() {
MyString s1("Intermediate c++");
//param
std::cout<<"s1\n";
s1.display();
std::cout << "length: " << s1.length() << "\n";
MyString s2(s1);
std::cout<<"s2\n";
s2.display(); //copy
MyString s3;
s3 = s1;
std::cout<<"s3\n";
s3.display(); //default
//assignment, s3.operator=(s1)
MyString s4("Hello Hi");
s4 = s1;
std::cout<<"s4\n";
s4.display();
std::cout<<"equal\n";
std::cout<<(s3==s2);
s1 = s1;
MyString s5;
s5 = s1 + s2;
std::cout<<"\ns5\n";
s5.display();
MyString s6("abcd");
//MyString s9("abcde");
std::cout<<"s6\n";
s6.display();

if((s6>s5)>0)
{
    std::cout<<"greater\n";
}
if((s5>s6)<0)
{
    std::cout<<"lesser\n";
}
MyString s7;
s7 = s1 + "xyz";
std::cout<<"s7\n";
s7.display();
MyString s8("Midula");
s8+="abcdxyz";
std::cout << s8;
s8.display();
std::cout<<"\n";
MyString s9;
std::cin>>s9;
s9.display();




//self assignment
//TODO : Overload other
//operators in MyString class
/*




std::cout << s1;
std::cin >> s2;*/
return 0;
}

#ifndef __POSTPAID_H
#define __POSTPAID_H

#include<string>
#include<cstdint>
#include <gtest/gtest.h>
#include "customer.h"
using namespace std;

class PostpaidCustomer : public CustomerBase 
{
  void billPay(double amount)
  {
    m_balance-=amount;
  }
  
  int m_billDate;
  
  public:
  PostpaidCustomer():m_billDate(1),CustomerBase(){}
  PostpaidCustomer(std::string s1,std::string s2,std::string s3,double a,int date):m_billDate(date),CustomerBase(s1,s2,s3,a){}
  //PostpaidCustomer(std::string,std::string,std::string);
  
  void credit(double val)
  {
    m_balance+=val;
  }          
  void makeCall(double cal)
  {
    m_balance-=(cal*10);
  }
  double getBalance() const
  {
    return m_balance;
  }
  void dispay() const
  {
    std:: cout<<m_custId<<" "<<m_custId<<" "<<m_custName<<" "<<m_phone<<" "<<m_balance<< endl;
  }

};

#endif

int main(int argc, char **argv)
{
	PostpaidCustomer p1("Midula","1234","realme 3",100,12);
	p1.dispay();
	p1.makeCall(2);
	std::cout<<p1.getBalance()<<endl;
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
	return 0;
}

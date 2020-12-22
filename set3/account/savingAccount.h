#ifndef __SAVINGS_ACCOUNT_H
#define __SAVINGS_ACCOUNT_H


#include<string>
#include<iostream>
#include "account.h"
#include <gtest/gtest.h>


class SavingsAccount : public AccountBase 
{
	public:

	SavingsAccount():AccountBase(){}
	SavingsAccount(std::string number, std::string name, double bal):AccountBase::AccountBase(number, name, bal){}

  
  	void debit(double val)
  	{	
  	    m_balance-= val;
 	} 
	void credit(double val1)
 	{
	      m_balance+= val1;
	}
	void dispay() const
	{
	      std::cout<<m_accName<<","<<m_accNumber<<","<<m_balance<<"\n";
	}
	int  getbalance() const
	{
	      return m_balance;
	}
};



#endif

int main(int argc, char **argv)
  {
      SavingsAccount s("Jay","99003136",1000);
      s.dispay();
      testing::InitGoogleTest(&argc, argv);
      return RUN_ALL_TESTS();
      return 0;
  }

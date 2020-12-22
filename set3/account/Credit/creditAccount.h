#ifndef __BANKING_H
#define __BANKING_H

#include<string>
#include<iostream>
#include"account.h"
#include <gtest/gtest.h>

class CreditAccount : public AccountBase 
{
  public:
  CreditAccount():AccountBase(){}
  CreditAccount(std::string number, std::string name, double bal):AccountBase(number, name, bal){}
  //CreditAccount(std::string,std::string); 
  
  void debit(double amount)
  {
      m_balance-= amount;
  }
  void credit(double amount)
  {
      m_balance+= amount;
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
      CreditAccount s("Jay","990031333",1000);
      s.dispay();
      testing::InitGoogleTest(&argc, argv);
      return RUN_ALL_TESTS();
      return 0;
}

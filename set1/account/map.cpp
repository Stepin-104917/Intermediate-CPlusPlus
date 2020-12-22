#include "account.h"
#include<iostream>
#include<vector>
#include<string>
#include"account.cpp"

using namespace std::literals;

int main()
{
	std:: vector<Account> banking;
	
	banking.push_back(Account("name1", "num1", 100));
	banking.push_back(Account("name2", "num2", 110));
	banking.push_back(Account("name3", "num3", 120));
	banking.push_back(Account("name4", "num4", 130));
	banking.push_back(Account("name5", "num5", 140));
	
	std:: vector<Account> :: iterator iter;
	for(iter=banking.begin(); iter!=banking.end(); ++iter)
	{
		iter->dispay();
	}
	
	iter = banking.begin();
	std:: advance(iter, 2);
	banking.insert(iter,Account("name33", "num8", 190));
	
	for(iter=banking.begin(); iter!=banking.end(); ++iter)
	{
		if(iter->getBalance()==120)
		{	banking.erase(iter);
			break;
		}	
	}	
	
	banking.insert(iter,Account("midula", "9900", 1111));
	
	
	std::cout<< "------------------------------------ " <<endl;
		
	for(iter=banking.begin(); iter!=banking.end(); ++iter)
	{
	
		iter->dispay();
	}
}


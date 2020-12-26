#include "library.h"
#include<iostream>
#include<string>
#include<list>
using namespace std;

void Library::addBook(int isbn, std::string title, std::string author, 
                            int year, double price, int pages) 
{
    //Book temp(isbn, title, author, year, price, pages);
    //books.push_back(temp);                            
    
    //books.push_back(Book(isbn, title, author, year, price, pages));
    
    books.emplace_back(isbn, title, author, year, price, pages);
}

//----------------------------------------------------1
void Library::displayAll() {
   std::list<Book>::iterator iter;
   for(iter=books.begin(); iter!=books.end(); ++iter)
       iter->display();
   //for(Book& ref:books)
   //       ref.display();
}
//--------------------------------------------------------2

Book* Library::findBookByISBN(int keyIsbn) 
{
   std::list<Book>::iterator iter;
   for(iter=books.begin(); iter!=books.end(); ++iter)
   {
       if(iter->isbn() == keyIsbn)
          break;
   }
   if(iter!=books.end())
     return &(*iter);
   else
     return nullptr;
}
//-------------------------------------------------------------3

bool Library::isBookFound(int keyIsbn) 
{
   std::list<Book>::iterator iter;
   for(iter=books.begin(); iter!=books.end(); ++iter)
   {
       if(iter->isbn() == keyIsbn)
          break;
   }
   if(iter!=books.end())
   {
     return true;
   }
   else
     return false;
}
//-------------------------------------------------------------4

void Library::removeBookByISBN(int keyIsbn) 
{
   std:: list<Book> :: iterator iter;
   for(iter=books.begin(); iter!=books.end(); ++iter)
   {
       if(iter->isbn() == keyIsbn)
          break;
   }
   if(iter!=books.end())
   {
     books.erase(iter);
   }
}
//--------------------------------------------------------------5

double Library::findAveragePrice() 
{
  double totalPrice=0;
  std:: list<Book> :: iterator iter;
  for(iter=books.begin(); iter!=books.end(); ++iter)
     totalPrice += iter->price();
  return totalPrice/books.size();
}
//-------------------------------------------------------------6

int Library::countBooksInPriceRange(int minVal, int maxVal) 
{
  //TODO
  
  int count = 0;
  std:: list<Book> :: iterator iter;
  for (iter = books.begin(); iter != books.end(); ++iter)
  {
  	if ((iter->price() >minVal )&& (iter->price()< maxVal))
  	{
  		count++;
  	}
  }
    return count;

}
//---------------------------------------------------------------7

Book& Library::findBookwithMaxPages() 
{
  std:: list<Book> ::iterator iter;
  iter = books.begin();
  auto maxIter=iter;
  double maxPrice=iter->price();
  ++iter;
  for(;iter!=books.end(); ++iter)
    if(iter->price() > maxPrice) 
    {
        maxPrice = iter->price();
        maxIter = iter;
    }
    return *maxIter;
    //return maxPrice;
}
//---------------------------------------------------------8

#ifndef __LIBRARY_H
#define __LIBRARY_H

#include<list>
#include "book.h"
#include<iostream>
#include<string>

class Library 
{
  std::list<Book> books;
  public:
  void addBook(int isbn, std::string title, std::string author, 
                            int year, double price, int pages);
  
  void displayAll();
  Book* findBookByISBN(int isbn);
  bool isBookFound(int KeyIsbn);
  void removeBookByISBN(int keyIsbn);
  double findAveragePrice();
  int countBooksInPriceRange(int minVal, int maxVal);
  Book& findBookwithMaxPages();
  
 // int count() { return books.size(); }
  //sortByTitle, sortByAuthor
  //MinPriceReleased in an year
};


#endif

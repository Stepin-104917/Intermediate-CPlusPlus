#ifndef __BOOK_H
#define __BOOK_H
#include<iostream>
#include<string>

class Book {
  int m_isbn;     //ideally to be std::string
  std::string m_title;
  std::string m_author;
  //std::string m_publisher;
  int m_year;       //publishing
  double m_price;
  int m_pages;
  public:
  //TODO: default ctor
  Book () : m_isbn(0), m_title (" default"), m_author ("default author"), m_year(0), m_price(0.0), m_pages(0) {}
  //TODO: param ctor
  Book(int isbn, std::string title, std::string author, int year, int price, int pages) : m_isbn(isbn), m_title (title), m_author (author), m_year(year), m_price(price), m_pages(pages) {}
  //TODO: getter functions - isbn(), title(), author()
  //                       - author(), publisher(), year()
  //                       - price(), pages()
  int isbn() const;
  std:: string title() const;
  std:: string author() const;
  int year() const;
  int price() const;
  int pages() const;
  
  //TODO:- display
  
  void display() const; 
  
  //TODO:- const suffix for immutable function

};
#endif

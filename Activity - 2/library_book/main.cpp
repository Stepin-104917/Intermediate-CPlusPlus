#include <iostream>
#include "library.h"
#include<string>
#include "library.cpp"
#include "book.h"
#include "book.cpp"

using namespace std;

int main()
{
	Library l1;
	
	l1.addBook(1212, "title1", "author1", 2020, 100.110, 100);
	l1.addBook(1213, "title2", "author2", 2020, 200.110, 200);
	l1.addBook(1214, "title3", "author3", 2020, 300.110, 300);
	l1.addBook(1215, "title4", "author4", 2020, 400.110, 400);
	l1.addBook(1216, "title5", "author5", 2020, 500.110, 500);
	l1.addBook(1217, "title6", "author6", 2020, 600.110, 600);
	
	l1.displayAll();
	std::cout<<"----------------------------------"<<endl;
	l1.findBookByISBN(1212)-> display();
	std::cout<<"----------------------------------"<<endl;
	
	std:: cout << l1.isBookFound(1211) << endl;
	std::cout<<"----------------------------------"<<endl;
	
	l1.removeBookByISBN(1213);
	
	l1.displayAll();
	
	std:: cout << l1.findAveragePrice() << endl;
	std::cout<<"----------------------------------"<<endl;
	
	l1.findBookwithMaxPages().display();
	
	
}

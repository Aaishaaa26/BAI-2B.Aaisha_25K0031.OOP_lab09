#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <string>
using namespace std;

class Book{
	string title, author, ISBN;
	public:
		Book();
		Book(string t, string a, string isbn);
		string getTitle();
		string getAuthor();
		string getISBN();
};

#endif

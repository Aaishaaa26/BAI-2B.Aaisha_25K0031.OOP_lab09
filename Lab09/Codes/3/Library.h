#ifndef LIBRARY_H
#define LIBRARY_H
#include "Book.h"
#include <iostream>
#include <string>
using namespace std;

class Library{
	Book List[100];
	int count;
	public:
		Library();
		void addBook(const Book& b);
		void removeBook(string isbn);
		void searchBook(string isbn);
};

#endif

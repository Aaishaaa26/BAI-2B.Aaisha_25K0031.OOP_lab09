#include "Book.h"
Book::Book() {
    title = "";
    author = "";
    ISBN = "";
}
Book::Book(string t, string a, string isbn) : title(t), author(a), ISBN(isbn){}
string Book::getTitle(){ return title;}
string Book::getAuthor(){ return author;}
string Book::getISBN(){ return ISBN;}

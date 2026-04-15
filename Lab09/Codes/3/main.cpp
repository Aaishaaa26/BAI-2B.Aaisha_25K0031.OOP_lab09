#include <iostream>
#include "Library.h"
using namespace std;

int main(){
    Library lib;
    int choice;
    string title, author, ISBN;

    do {
        cout << "\t\t\t\t\t________library______"<< endl;
        cout << "1. Add Book"<< endl;
        cout << "2. Remove Bhook"<< endl;
        cout << "3. Search Book"<< endl;
        cout << "4. Exit"<< endl;
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        switch(choice){
        case 1:
            cout << "Enter Title: ";
            getline(cin, title);
            cout << "Enter Author: ";
            getline(cin, author);
            cout << "Enter ISBN: ";
            getline(cin, ISBN);
            { Book b(title, author, ISBN);
            lib.addBook(b); } //Book b destruct hojai gi after adding
            break;
        case 2:
            cout << "Enter book ISBN to remove: ";
            getline(cin, ISBN);
            lib.removeBook(ISBN);
            break;
        case 3:
            cout << "Enter book ISBN to search: ";
            getline(cin, ISBN);
            lib.searchBook(ISBN);
            break;
        case 4: cout << "Exiting WOHOOO"; break;
        default: cout << "Invalid Option"<< endl;
        }
    }while(choice != 4);
}

#include "Library.h"

Library::Library(){ count = 0;}
void Library::addBook(const Book& b){
     if(count < 100){
	    List[count++] = b; 
        cout <<"\nBook Added Successfully"<< endl;
	}
	else{
		cout<<"\nList FOOOOL" << endl;
	}
}

void Library::removeBook(string isbn){
	for(int i = 0; i < count; i++){
		if(List[i].getISBN() == isbn){
			for(int j = i; j < count -1; j++){
				List[j] = List[j+1];
			}
			count--;
			cout<< "\nBook Removed" << endl;
			return;
		}
	}
	cout <<"\nBook Not Found" << endl;
}
void Library::searchBook(string isbn){
	for(int i = 0; i < count; i++){
		if(List[i].getISBN() == isbn){
			cout << "\nBook Found\nTitle: " << List[i].getTitle()<<"\nAuthor: " << List[i].getAuthor()<< endl;
		    return;
		}
	}
	cout <<"\nBook Not Found" << endl;
}

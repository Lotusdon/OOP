#include <iostream>
#include "Book.h"
using namespace std;

int main(){
    Book books[]={Book("Harry Potter", "JK Rowling", "0000011111222"),
                  Book("Matilda", "Roald Dahl", "1111122222333"),
                  Book("Chocolates", "Arham", "2222233333444")};
    Library l(books, 3);
    l.addBook(Book("Burgers", "Usman", "4444455555666"));
    l.displayAll();
    int index=l.searchBook("0000011111222");
    cout<<"\nDeleting the book with ISBN 0000011111222:\n";
    (index==-1)?cout<<"Book not found\n": cout<<"Book found at index: "<< index<<endl;
    l.removeBook("0000011111222");
    l.displayAll();
}

#include "Book.h"
#include <iostream>
using namespace std;

Book::Book(string Title, string Author, string ISBN){
    title=Title;
    author=Author;
    this->ISBN=ISBN;
}

string Book::getTitle(){
    return title;
}

string Book::getAuthor(){
    return author;
}

string Book::getISBN(){
    return ISBN;
}

Library::Library(Book* Books, int NoOfBooks){
    noOfBooks=NoOfBooks;
    if (noOfBooks>0){
        books=new Book[noOfBooks];
        for (int i=0; i<noOfBooks; i++){
            books[i]=Books[i];
        }
    }
    else{
        books=nullptr;
    }
}

void Library::addBook(Book book){
    Book* temp=new Book[noOfBooks+1];
    for (int i=0; i<noOfBooks; i++){
        temp[i]=books[i];
    }
    delete[] books;
    books=temp;
    books[noOfBooks++]=book;
    cout<<"Book added successfully!\n";
}

void Library::removeBook(string isbn){
    int index=searchBook(isbn);
    if (index==-1) cout<<"Book not Found!\n";
    else{
        Book* temp= new Book[noOfBooks-1];
        int val=0;
        for (int i=0; i<noOfBooks; i++){
            if (i==index) continue;
            temp[val++]=books[i];
        }
        delete[] books;
        books=temp;
        cout<<"Book deleted successfully!\n";
        noOfBooks--;
    }
}

int Library::searchBook(string isbn){
    for (int i=0; i<noOfBooks; i++){
        if (books[i].getISBN()==isbn) return i;
    }
    return -1;
}

void Library::displayAll(){
    cout<<"\nDisplaying All Books:\n";
    for (int i=0; i<noOfBooks; i++){
        cout<<"\nBook "<<i<<endl;
        cout<<"Title: "<<books[i].getTitle()<<endl;
        cout<<"Author: "<<books[i].getAuthor()<<endl;
        cout<<"ISBN: "<<books[i].getISBN()<<endl;
    }
}

Library::~Library(){
    delete[] books;
}

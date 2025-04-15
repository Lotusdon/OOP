#ifndef BOOK
#define BOOK
#include <string>
using namespace std;

class Book{
    protected:
    string title, author, ISBN;
    public:
    Book(string Title="", string Author="", string ISBN="");
    string getTitle();
    string getAuthor();
    string getISBN();
};

class Library{
    Book *books;
    int noOfBooks;
    public:
    Library(Book* Books=nullptr, int NoOfBooks=0);
    void addBook(Book book);
    void removeBook(string isbn);
    int searchBook(string isbn);
    void displayAll();
    ~Library();
};

#endif

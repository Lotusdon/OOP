#include <iostream>
using namespace std;

class book {
    int id;
    string title;
    string author;
    bool availability;

public:
    void setid() {
        cin >> id;
        cin.ignore();  
    }

    void settitle() {
        getline(cin, title);
    }

    void setauthor() {
        getline(cin, author);
    }

    void setavailability(bool status) {
        availability = status;
    }

    int getid() {
        return id;
    }

    string gettitle() {
        return title;
    }

    string getauthor() {
        return author;
    }

    bool getavailability() {
        return availability;
    }
};

class library {
    int c = 0;
    book* b;

public:
    library() {
        b = new book[10];
    }

    ~library() {
        delete[] b;
    }

    void add() {
        cout << "Enter book details here: " << endl;
        cout << "Enter ID: " ;
        b[c].setid();
        cout << "Enter Title: " ;
        b[c].settitle();
        cout << "Enter Author: " ;
        b[c].setauthor();
        cout << "Enter Availability (1 for available, 0 for borrowed): " ;
        bool avail;
        cin >> avail;
        b[c].setavailability(avail);
        c++;
    }

    void borrow(string n) {
        for (int i = 0; i < c; i++) {
            if (b[i].gettitle() == n && b[i].getavailability()) {
                cout << "Book available, you have borrowed the book " << b[i].gettitle() << endl;
                b[i].setavailability(false);
                return;
            }
        }
        cout << "Book not available or already borrowed." << endl;
    }

    void returning(string n) {
        for (int i = 0; i < c; i++) {
            if (b[i].gettitle() == n && !b[i].getavailability()) {
                b[i].setavailability(true);
                cout << "Book has been returned" << endl;
                return;
            }
        }
        cout << "Book was not borrowed or does not exist." << endl;
    }

    void display() {
        for (int i = 0; i < c; i++) {
            cout << "sssss Library" << endl;
            cout << "Book " << i + 1 << endl;
            cout << "Name: " << b[i].getid() << endl;
            cout << "Title: " << b[i].gettitle() << endl;
            cout << "Author: " << b[i].getauthor() << endl;
            cout << "Availability: " << b[i].getavailability() << endl;
            cout << "\n";
        }
    }
};

int main() {
    string n, n1;
    library l;
    l.add();
    l.add();
    
    cout << "enter name to borrow: ";
    cin.ignore();
    getline(cin, n);
    l.borrow(n);

    cout << "enter name to return: ";
    getline(cin, n1);
    l.returning(n1);

    l.display();

    return 0;
}

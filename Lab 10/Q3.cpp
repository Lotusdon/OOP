
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream chapter1("chapter1.txt");
    ifstream chapter2("chapter2.txt");
    ofstream book("book.txt", ios::app);

    if (!chapter1 || !chapter2 || !book) {
        cerr << "Error: Could not open one or more files." << endl;
        return 1;
    }

    string line;

    while (getline(chapter1, line)) {
        book << line << endl;
    }

    book << endl;

    while (getline(chapter2, line)) {
        book << line << endl;
    }

    chapter1.close();
    chapter2.close();
    book.close();

    ifstream readBook("book.txt");
    if (!readBook) {
        cerr << "Error: Could not open book.txt for reading." << endl;
        return 1;
    }

    cout << "\n--- Book Content ---\n";
    while (getline(readBook, line)) {
        cout << line << endl;
    }

    readBook.close();
    return 0;
}

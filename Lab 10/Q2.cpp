#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct student {
    string name;
    string email;
    int yoe;
    string summary;
};

int main() {
    student s;
    string line;

    cout << "Enter name: ";
    getline(cin, s.name);
    cout << "Enter email: ";
    getline(cin, s.email);
    cout << "Enter years of experience: ";
    cin >> s.yoe;
    cin.ignore();
    cout << "Enter summary: ";
    getline(cin, s.summary);

    ofstream file("resume.txt", ios::binary | ios::trunc | ios::out);
    if (!file) {
        cout << "File error!" << endl;
        return 1;
    }

    file << s.name << " " << s.email << " " << s.yoe << " " << s.summary << endl;

    file.close();

    ifstream inFile("resume.txt", ios::binary);
    if (!inFile) {
        cout << "Error opening file for reading!" << endl;
        return 1;
    }

    cout << "\nfile stuff:\n";
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();
    return 0;
}

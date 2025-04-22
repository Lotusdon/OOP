#include <iostream>
#include <fstream>
#include <string>

using namespace std;


struct Student {
    int id;
    string name;
    float gpa;
};


void writeStudent(ofstream& outFile, const Student& s) {
    outFile << s.id << " " << s.name << " " << s.gpa << endl;
}


void readStudents(const string& filename) {
    ifstream inFile(filename);
    if (!inFile) {
        cerr << "Error opening file for reading." << endl;
        return;
    }

    Student s;
    cout << "\nAll student records:\n";
    while (inFile >> s.id >> s.name >> s.gpa) {
        cout << "ID: " << s.id << ", Name: " << s.name << ", GPA: " << s.gpa << endl;
    }

    inFile.close();
}

int main() {
    const string filename = "students.txt";
    Student students[5];

   
    cout << "Enter data for 5 students:\n";
    for (int i = 0; i < 5; ++i) {
        cout << "Student " << (i + 1) << ":\n";
        cout << "ID: ";
        cin >> students[i].id;
        cout << "Name: ";
        cin >> students[i].name;
        cout << "GPA: ";
        cin >> students[i].gpa;
    }

    
    ofstream outFile(filename, ios::out);
    if (!outFile) {
        cerr << "Error opening file for writing." << endl;
        return 1;
    }

    for (int i = 0; i < 5; ++i) {
        writeStudent(outFile, students[i]);
    }

    outFile.close();

    
    Student extraStudent;
    cout << "\nEnter one more student to append:\n";
    cout << "ID: ";
    cin >> extraStudent.id;
    cout << "Name: ";
    cin >> extraStudent.name;
    cout << "GPA: ";
    cin >> extraStudent.gpa;

    ofstream appendFile(filename, ios::app);
    if (!appendFile) {
        cerr << "Error opening file for appending." << endl;
        return 1;
    }

    writeStudent(appendFile, extraStudent);
    appendFile.close();

    
    readStudents(filename);

    return 0;
}


#include <iostream>

using namespace std;

struct Student {
    int studentNumber;
    string studentName;
    string studentSurname;
    double averMark;
    char group;
};

void printInformation (Student student) {
    cout << "Student number: " << student.studentNumber << endl;
    cout << "Student name: " << student.studentName << endl;
    cout << "Student surname: " << student.studentSurname << endl;
    cout << "Student average mark: " << student.averMark << endl;
    cout << "Student group: " << student.group << endl;
}

int main()
{
    //Student ivan = {1, "ivan", "popov", 3.2, 'b'};
    Student ivan;
    cout << "Type student number: " << endl;
    cin >> ivan.studentNumber;
    cout << "Type student name: " << endl;
    cin >> ivan.studentName;
    cout << "Type student surname: " << endl;
    cin >> ivan.studentSurname;
    cout << "Type student average mark: " << endl;
    cin >> ivan.averMark;
    cout << "Type student group: " << endl;
    cin >> ivan.group;
    
    printInformation (ivan);

    return 0;
}

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
    Student ivan = {1, "ivan", "popov", 3.2, 'b'};
    printInformation (ivan);

    return 0;
}

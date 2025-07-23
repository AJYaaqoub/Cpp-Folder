#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int id;
    float gpa;
};

int main() {
    Student students[3] = {
        {"Jamil", 101, 3.9},
        {"Sadiq", 102, 3.2},
        {"Maryam", 103, 3.5}
    };

    string searchName;
    cout << "Enter name to search: ";
    cin >> searchName;

    bool found = false;

    for (int i = 0; i < 3; i++) {
        if (students[i].name == searchName) {
            cout << "Found: ID = " << students[i].id << ", GPA = " << students[i].gpa << endl;
            found = true;
            break; // Exit loop after finding
        }
    }

    if (!found)
        cout << "Student not found.\n";

    return 0;
}

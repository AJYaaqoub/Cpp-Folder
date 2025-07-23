#include <iostream>
using namespace std;

int main() {
    struct Student
    {
        string name;
        int age;
        float gpa;
    };

    Student newStudent = {"Aisha", 19, 3.86};

        Student students[3] = 
        {
            {"Aisha", 19, 3.86}, 
            {"Roland", 22, 4.65}, 
            {"Fateemah", 19, 4.13}
        };

    struct Book
    {
        string title;
        float price;
        int releaseYear;
    };
    
    Book firstbook = {"Lord of the rings", 525, 1998};
    Book books[3] = 
        {
            {"James Bond", 675, 1999}, 
            {"Adventure to the unknown", 225, 1976}, 
            {"Fateemah, the priceless😍", 9999, 1998}
        };
    // cout << students[1];
    return 0;
}
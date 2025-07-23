# 🇨🇵 C++ Learning Summary - From Basics to Projects

> *Your complete C++ guide: theory, examples, exercises, and one final project.*

---

## 📜 1. Introduction & History of C++

C++ is a general-purpose programming language created by **Bjarne Stroustrup** as an extension of the C language. It combines procedural and object-oriented programming features, making it powerful for systems/software development.

### 🔍 Example:

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Welcome to C++!" << endl;
    return 0;
}
```

### 🧠 Exercises:

1. Research and print the year C++ was created.
2. Write a program that displays your name, department, and reason for learning C++.

---

## 🔤 2. C++ Data Types

### ✅ Categories:

* **Primitive:** `int`, `char`, `float`, `double`, `bool`
* **Derived:** `array`, `pointer`, `function`
* **User-defined:** `struct`, `union`, `enum`, `class`

### 🔍 Example:

```cpp
int age = 20;
double pi = 3.14159;
char grade = 'A';
bool passed = true;
```

### 🧠 Exercises:

1. Declare variables of each primitive type and print them.
2. Create a struct to store student info (name, age, GPA).

---

## 🔁 3. Iteration (Loops)

### ✅ Types:

* `for`
* `while`
* `do...while`

### 🔍 Example (Multiplication Table):

```cpp
int num = 5;
for (int i = 1; i <= 10; i++) {
    cout << num << " x " << i << " = " << num * i << endl;
}
```

### 🧠 Exercises:

1. Print even numbers from 1 to 100 using a `for` loop.
2. Build a star pyramid using nested loops.

---

## 🔀 4. Conditional Statements

### ✅ Types:

* `if`
* `if...else`
* `else if`
* `switch`

### 🔍 Example:

```cpp
int mark = 75;
if (mark >= 70) cout << "A";
else if (mark >= 60) cout << "B";
else cout << "C or below";
```

### 🧠 Exercises:

1. Write a program that checks if a number is positive, negative or zero.
2. Use `switch` to create a simple calculator (+, -, \*, /).

---

## 📦 5. C++ Data Structures

### ✅ Focus:

* Arrays
* Structs
* Vectors (from STL)

### 🔍 Example (Array of Structs):

```cpp
struct Student {
    string name;
    int age;
};

Student students[2] = {{"Ali", 19}, {"Zara", 20}};
```

### 🧠 Exercises:

1. Create a program that stores and prints names of 5 items using arrays.
2. Store and print details of 3 books using `struct`.

---

## 🎓 Final Project: Student Result Management System

### 🎯 Objective:

Create a C++ program that stores student records and calculates their grades.

### 🧱 Requirements:

* Store student name, matric number, and scores for 3 courses.
* Calculate average and assign grade (A–F).
* Display a report for each student.

### 💻 Code:

```cpp
#include <iostream>
#include <vector>
using namespace std;

struct Student {
    string name;
    string matric;
    float scores[3];
    float average;
    char grade;
};

char getGrade(float avg) {
    if (avg >= 70) return 'A';
    else if (avg >= 60) return 'B';
    else if (avg >= 50) return 'C';
    else if (avg >= 45) return 'D';
    else return 'F';
}

int main() {
    vector<Student> students;
    int count;
    cout << "Enter number of students: ";
    cin >> count;

    for (int i = 0; i < count; i++) {
        Student s;
        cout << "\nEnter name: "; cin >> s.name;
        cout << "Enter matric number: "; cin >> s.matric;

        float sum = 0;
        for (int j = 0; j < 3; j++) {
            cout << "Enter score for course " << j+1 << ": ";
            cin >> s.scores[j];
            sum += s.scores[j];
        }

        s.average = sum / 3;
        s.grade = getGrade(s.average);
        students.push_back(s);
    }

    // Display report
    cout << "\n\n--- STUDENT REPORT ---\n";
    for (auto& s : students) {
        cout << "Name: " << s.name << "\nMatric: " << s.matric
             << "\nAverage: " << s.average
             << "\nGrade: " << s.grade << "\n\n";
    }
    return 0;
}
```

### 🧠 Explanation of study:

* Used `struct` to group student data
* Collected data using a `for` loop
* Calculated average and used a custom function for grading
* Stored results in a `vector`

---

## 📚 Mid-Level Project Assignments

### 🔖 Assignment 1: Library Book Tracker

* Use structs and arrays/vectors to manage a list of books
* Store title, author, ISBN, and availability
* Include functions to borrow/return books

### 🔖 Assignment 2: Simple Bank Account System

* Register multiple accounts
* Support deposit and withdrawal
* Display balance and transaction history

### 🔖 Assignment 3: Marks Analyzer

* Input scores of 10 students
* Calculate highest, lowest, and class average
* Display summary table

---

## ✅ Wrap-up & Next Steps

You've now covered:

* History & Setup
* Data Types & Structures
* Iteration & Conditionals
* Full Mid-Level Project
* Practical Assignments

📌 Next: Learn **OOP Concepts** (Classes, Objects, Inheritance, Polymorphism) and explore **File Handling** & **STL**.

---

> “The more you code, the more you grow.” – Keep practicing!

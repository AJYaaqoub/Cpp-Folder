# 📘 C++ Data Structures – Complete Study Guide (with Short Definitions & Use Cases)

## 🧱 Table of Contents

1. Arrays
2. Strings
3. Structures (`struct`)
4. Classes & Objects
5. Linked Lists (Singly & Doubly)
6. Stacks
7. Queues
8. Vectors
9. Maps
10. Sets
11. Priority Queues
12. Deques
13. Exercises

---

## 1. 🔢 Arrays

### ➤ Short Definition

A fixed-size collection of elements of the same type stored in continuous memory.

### ➤ Use Case

Efficiently store and access a list of values (e.g., exam scores).

### ➤ Syntax

```cpp
int arr[5];              // Declaration
int arr[] = {1, 2, 3};   // Initialization
```

### ➤ Accessing and Modifying

```cpp
arr[0] = 10;
cout << arr[2];
```

### ➤ Looping

```cpp
for(int i = 0; i < 5; i++) {
    cout << arr[i];
}
```

### ➤ Exercise

Write a program that:

* Takes 5 numbers
* Finds the maximum
* Calculates the average

---

## 2. 📄 Strings

### ➤ Short Definition

A sequence of characters used to store and manipulate text.

### ➤ Use Case

Handling names, messages, user input, etc.

### ➤ Using `string` (STL)

```cpp
#include <string>
string name = "Jamil";
name += " Usmann";
```

### ➤ Common Operations

```cpp
name.length();
name.substr(0, 5);
name.find("mil");
name.replace(0, 5, "Abdu");
```

### ➤ Iteration

```cpp
for (char c : name) {
    cout << c << " ";
}
```

---

## 3. 🧱 Structures (`struct`)

### ➤ Short Definition

A user-defined data type that groups variables of different types together.

### ➤ Use Case

Representing entities like students, books, or employees.

### ➤ Syntax

```cpp
struct Student {
    string name;
    int age;
    float gpa;
};
```

### ➤ Usage

```cpp
Student s1 = {"Amina", 19, 4.0};
cout << s1.name;
```

### ➤ Array of Structs

```cpp
Student students[3];
```

### ➤ Exercise

Create a `Book` struct and store multiple books. Display all books with price > 500.

---

## 4. 🧠 Classes and Objects

### ➤ Short Definition

A blueprint for creating objects. Combines data and functions into one unit.

### ➤ Use Case

Modeling real-world entities (e.g., a Car, BankAccount) using OOP principles.

### ➤ Syntax

```cpp
class Car {
public:
    string brand;
    void honk() {
        cout << "Beep!";
    }
};
```

### ➤ Constructors

```cpp
Car(string b) { brand = b; }
```

### ➤ Access Specifiers

* `public`: Accessible everywhere
* `private`: Accessible only inside the class
* `protected`: Accessible in derived classes

---

## 5. 🔗 Linked Lists

### ➤ Short Definition

A linear data structure where each element (node) points to the next.

### ➤ Use Case

Dynamic memory allocation, efficient insert/delete.

### ➤ Node Structure

```cpp
struct Node {
    int data;
    Node* next;
};
```

### ➤ Basic Operations

* Insert at head
* Insert at tail
* Delete node
* Search

### ➤ Example: Insert at Head

```cpp
Node* head = NULL;
void insert(int val) {
    Node* newNode = new Node{val, head};
    head = newNode;
}
```

---

## 6. 📚 Stacks (LIFO)

### ➤ Short Definition

Last-In-First-Out structure. The last item added is the first removed.

### ➤ Use Case

Undo systems, expression evaluation, function calls.

### ➤ Using STL

```cpp
#include <stack>
stack<int> st;
st.push(10);
st.pop();
cout << st.top();
```

---

## 7. 🩜 Queues (FIFO)

### ➤ Short Definition

First-In-First-Out structure. The first item added is the first removed.

### ➤ Use Case

Job scheduling, printing queues, task processing.

### ➤ Using STL

```cpp
#include <queue>
queue<int> q;
q.push(1);
q.pop();
cout << q.front();
```

---

## 8. 📊 Vectors

### ➤ Short Definition

A dynamic array that grows automatically.

### ➤ Use Case

When array size is not known in advance.

### ➤ Declaration

```cpp
#include <vector>
vector<int> v = {1, 2, 3};
v.push_back(4);
```

### ➤ Iteration

```cpp
for (int x : v) cout << x;
```

### ➤ Common Methods

* `v.size()`
* `v.clear()`
* `v.pop_back()`
* `v.insert()`

---

## 9. 🗀 Maps (Key-Value Pairs)

### ➤ Short Definition

Stores elements as key-value pairs, sorted by keys.

### ➤ Use Case

Fast lookup and association of data (like a dictionary).

### ➤ Declaration

```cpp
#include <map>
map<string, int> age;
age["Ali"] = 20;
```

### ➤ Iteration

```cpp
for (auto p : age)
    cout << p.first << ": " << p.second;
```

---

## 10. 📚 Sets (Unique Sorted Elements)

### ➤ Short Definition

Stores unique elements in sorted order.

### ➤ Use Case

Finding unique values, set operations.

### ➤ Declaration

```cpp
#include <set>
set<int> s;
s.insert(5);
```

### ➤ Useful Functions

* `s.count(x)`
* `s.find(x)`
* `s.erase(x)`

---

## 11. 🎚️ Priority Queues

### ➤ Short Definition

A special queue where the highest/lowest priority element is accessed first.

### ➤ Use Case

Task scheduling, simulations, greedy algorithms.

### ➤ Max Heap (Default)

```cpp
priority_queue<int> pq;
pq.push(10);
pq.pop();
```

### ➤ Min Heap

```cpp
priority_queue<int, vector<int>, greater<int>> minPQ;
```

---

## 12. ↔️ Deques (Double-Ended Queue)

### ➤ Short Definition

A double-ended queue that allows insertion and deletion at both ends.

### ➤ Use Case

Sliding window problems, palindrome checking.

### ➤ Declaration

```cpp
#include <deque>
deque<int> dq;
dq.push_back(1);
dq.push_front(2);
dq.pop_back();
```

### ➤ Operations

* `push_front`, `push_back`
* `pop_front`, `pop_back`

---

## 13. 🧪 Practice Exercises

1. Write a program using arrays to reverse a list of numbers.
2. Implement a stack without STL.
3. Create a class `BankAccount` with deposit and withdraw methods.
4. Build a linked list and allow insertion at any position.
5. Use a queue to simulate a printing job system.
6. Store student names in a set and display them in sorted order.
7. Build a frequency counter using a map.

---

## ✅ Tips

* Practice with both STL and manual implementation
* Learn memory management (new/delete)
* Understand time/space complexity of operations

---

Happy Coding! 🚀

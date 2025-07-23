# 📘 Iterative Methods in C++

> *“Iterative methods allow repeated execution of a set of instructions until a condition is met.”*

---

## 🧠 What are Iterative Methods?

In C++, **iteration** refers to repeatedly executing a block of code as long as a condition holds true. This is commonly done using **loops**.

There are 3 primary types of loops in C++:

1. `for` loop
2. `while` loop
3. `do...while` loop

---

## 1. 🔁 `for` Loop

### ✅ Syntax:

```cpp
for (initialization; condition; update) {
    // code block to execute
}
```

### 📌 Use Case:

When you know **in advance** how many times you want to loop.

### 🔍 Example:

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        cout << "Iteration " << i << endl;
    }
    return 0;
}
```

---

## 2. 🔄 `while` Loop

### ✅ Syntax:

```cpp
while (condition) {
    // code block to execute
}
```

### 📌 Use Case:

When you **don’t know in advance** how many times the loop will run, but you have a condition.

### 🔍 Example:

```cpp
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    while (i <= 5) {
        cout << "Value: " << i << endl;
        i++;
    }
    return 0;
}
```

---

## 3. 🔁 `do...while` Loop

### ✅ Syntax:

```cpp
do {
    // code block
} while (condition);
```

### 📌 Use Case:

When you want the code to execute **at least once**, even if the condition is false.

### 🔍 Example:

```cpp
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    do {
        cout << "Counter: " << i << endl;
        i++;
    } while (i <= 5);
    return 0;
}
```

---

## 4. 🔃 `range-based for` Loop (C++11+)

### ✅ Syntax:

```cpp
for (data_type variable : container) {
    // code
}
```

### 📌 Use Case:

Iterating through arrays, vectors, strings, etc.

### 🔍 Example:

```cpp
#include <iostream>
using namespace std;

int main() {
    int nums[] = {1, 2, 3, 4, 5};
    for (int n : nums) {
        cout << "Number: " << n << endl;
    }
    return 0;
}
```

---

## 🛑 Loop Control Statements

### 🔹 `break`:

Exit the loop entirely.

```cpp
for (int i = 0; i < 10; i++) {
    if (i == 5) break;
    cout << i << " ";
}
```

### 🔹 `continue`:

Skip the current iteration and go to the next one.

```cpp
for (int i = 0; i < 10; i++) {
    if (i == 5) continue;
    cout << i << " ";
}
```

---

## 🔄 Nested Loops

A loop inside another loop.

### 🔍 Example:

```cpp
for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= 2; j++) {
        cout << "i = " << i << ", j = " << j << endl;
    }
}
```

---

## 🎯 Mini Exercises

### 📝 Exercise 1: Print all even numbers from 1 to 50

```cpp
for (int i = 1; i <= 50; i++) {
    if (i % 2 == 0) cout << i << " ";
}
```

### 📝 Exercise 2: Sum of first `n` numbers using while loop

```cpp
int n = 10, i = 1, sum = 0;
while (i <= n) {
    sum += i;
    i++;
}
cout << "Sum: " << sum << endl;
```

### 📝 Exercise 3: Table of any number using `do...while`

```cpp
int num = 7, i = 1;
do {
    cout << num << " x " << i << " = " << num * i << endl;
    i++;
} while (i <= 10);
```

### 📝 Exercise 4: Multiplication Table using `for` loop (user-defined number)

This prints the multiplication table of a given number from 1 to 12.

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= 12; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }
    return 0;
}
```

### 📝 Exercise 5: Print a pyramid pattern of stars `*`

This demonstrates nested loops to build a left-aligned pyramid pattern.

```cpp
#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
```

📌 *Explanation: The outer loop handles the number of rows, while the inner loop prints the required number of stars for each row.*

---

## 🧮 Real-World Use Cases of Iteration in C++

| Task                             | Use of Iteration           |
| -------------------------------- | -------------------------- |
| Validating user input            | `while` loop               |
| Reading data from files          | `while` loop               |
| Performing repeated calculations | `for` loop                 |
| Drawing UI patterns (like stars) | nested `for` loops         |
| Searching in arrays              | `for` loop or `while` loop |

---

## ⚠️ Common Mistakes to Avoid

* Forgetting to update the loop variable (infinite loop)
* Using `=` instead of `==` in conditions
* Off-by-one errors in loops
* Modifying container while iterating over it

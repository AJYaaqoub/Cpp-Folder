````md
# Comprehensive Guide to Functions in C++

Functions are fundamental building blocks in C++ programming. They allow you to break down your program into reusable, modular pieces of code. This guide covers everything you need to know about functions, from basic syntax to advanced topics, along with practical examples and exercises.

---

## Table of Contents

1. [What is a Function?](#what-is-a-function)  
2. [Function Declaration, Definition, and Call](#function-declaration-definition-and-call)  
3. [Function Parameters and Arguments](#function-parameters-and-arguments)  
4. [Return Types](#return-types)  
5. [Function Overloading](#function-overloading)  
6. [Default Arguments](#default-arguments)  
7. [Inline Functions](#inline-functions)  
8. [Recursion](#recursion)  
9. [Passing Parameters: Call by Value vs Call by Reference](#passing-parameters-call-by-value-vs-call-by-reference)  
10. [Function Pointers](#function-pointers)  
11. [Lambda Functions (Anonymous Functions)](#lambda-functions-anonymous-functions)  
12. [Real World Examples and Exercises](#real-world-examples-and-exercises)  
13. [Sample Project: Simple Banking System Using Functions](#sample-project-simple-banking-system-using-functions)  

---

## What is a Function?

A **function** is a block of code that performs a specific task. Functions help organize code, promote reusability, and improve readability.

---

## Function Declaration, Definition, and Call

- **Declaration (Prototype):** Tells the compiler about a function's name, return type, and parameters.
- **Definition:** Contains the actual body/code of the function.
- **Call:** Executes the function.

### Syntax

```cpp
return_type function_name(parameter_list);  // Declaration

return_type function_name(parameter_list) { // Definition
    // function body
}

int main() {
    function_name(arguments);               // Call
}
````

### Example

```cpp
#include <iostream>

// Function declaration
void greet();

int main() {
    greet();  // Calling the function
    return 0;
}

// Function definition
void greet() {
    std::cout << "Hello, welcome to C++ functions!\n";
}
```

---

## Function Parameters and Arguments

Functions can take inputs called **parameters**. When you call a function, you provide **arguments**.

```cpp
void greetUser(std::string name) {
    std::cout << "Hello, " << name << "!\n";
}

int main() {
    greetUser("Abdulllahi");
    return 0;
}
```

---

## Return Types

Functions can return a value using the `return` statement.

```cpp
int add(int a, int b) {
    return a + b;
}

int main() {
    int sum = add(5, 7);
    std::cout << "Sum is " << sum << "\n";
    return 0;
}
```

---

## Function Overloading

Multiple functions can have the same name but different parameters.

```cpp
int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int main() {
    std::cout << add(5, 7) << "\n";       // Calls int version
    std::cout << add(5.5, 7.3) << "\n";   // Calls double version
    return 0;
}
```

---

## Default Arguments

You can provide default values for parameters.

```cpp
void greet(std::string name = "Guest") {
    std::cout << "Hello, " << name << "!\n";
}

int main() {
    greet();           // Hello, Guest!
    greet("Jameel");   // Hello, Jameel!
    return 0;
}
```

---

## Inline Functions

Suggests to the compiler to replace the function call with the function code to reduce overhead (best for small functions).

```cpp
inline int square(int x) {
    return x * x;
}
```

---

## Recursion

Functions that call themselves.

```cpp
int factorial(int n) {
    if (n <= 1) return 1;
    else return n * factorial(n - 1);
}

int main() {
    std::cout << factorial(5);  // Output: 120
    return 0;
}
```

---

## Passing Parameters: Call by Value vs Call by Reference

* **Call by Value:** Passes a copy; changes inside the function do not affect the original.

```cpp
void increment(int x) {
    x = x + 1;
}

int main() {
    int a = 5;
    increment(a);
    std::cout << a;  // Output: 5
}
```

* **Call by Reference:** Passes reference; changes inside affect the original variable.

```cpp
void increment(int &x) {
    x = x + 1;
}

int main() {
    int a = 5;
    increment(a);
    std::cout << a;  // Output: 6
}
```

---

## Function Pointers

Pointers that store addresses of functions.

```cpp
#include <iostream>

void greet() {
    std::cout << "Hello!\n";
}

int main() {
    void (*funcPtr)() = greet;  // Pointer to greet function
    funcPtr();                  // Call greet via pointer
    return 0;
}
```

---

## Lambda Functions (Anonymous Functions)

Functions without a name, often used as inline callbacks.

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    int count = 0;
    std::for_each(numbers.begin(), numbers.end(), [&](int n) {
        if (n % 2 == 0) count++;
    });

    std::cout << "Even numbers count: " << count << "\n";
    return 0;
}
```

---

## Real World Examples and Exercises

### Exercise 1: Temperature Converter

Write a function that converts Celsius to Fahrenheit.

```cpp
double celsiusToFahrenheit(double c) {
    return (c * 9 / 5) + 32;
}

int main() {
    std::cout << celsiusToFahrenheit(30) << "\n";  // Output: 86
    return 0;
}
```

---

### Exercise 2: Prime Number Checker

Write a function to check if a number is prime.

```cpp
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int num = 29;
    if (isPrime(num)) std::cout << num << " is prime.\n";
    else std::cout << num << " is not prime.\n";
    return 0;
}
```

---

### Exercise 3: Fibonacci Sequence Generator

Generate Fibonacci numbers up to `n` using recursion.

```cpp
int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n = 10;
    for (int i = 0; i < n; i++) {
        std::cout << fibonacci(i) << " ";
    }
    return 0;
}
```

---

## Sample Project: Simple Banking System Using Functions

**Description:** Simulate basic banking operations like deposit, withdrawal, and balance inquiry using functions.

```cpp
#include <iostream>
#include <string>

double balance = 0.0;

void deposit(double amount) {
    if (amount > 0) {
        balance += amount;
        std::cout << "Deposited: $" << amount << "\n";
    } else {
        std::cout << "Invalid deposit amount.\n";
    }
}

void withdraw(double amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        std::cout << "Withdrawn: $" << amount << "\n";
    } else {
        std::cout << "Invalid withdrawal amount or insufficient funds.\n";
    }
}

void checkBalance() {
    std::cout << "Current balance: $" << balance << "\n";
}

int main() {
    int choice;
    double amount;

    do {
        std::cout << "\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\nChoose an option: ";
        std::cin >> choice;

        switch(choice) {
            case 1:
                std::cout << "Enter deposit amount: ";
                std::cin >> amount;
                deposit(amount);
                break;
            case 2:
                std::cout << "Enter withdrawal amount: ";
                std::cin >> amount;
                withdraw(amount);
                break;
            case 3:
                checkBalance();
                break;
            case 4:
                std::cout << "Thank you for using the banking system.\n";
                break;
            default:
                std::cout << "Invalid choice.\n";
        }
    } while(choice != 4);

    return 0;
}
```

---

## Summary

Functions in C++ help you organize code efficiently and build scalable programs. Understanding how to declare, define, and use functions—including advanced topics like recursion, pointers, and lambdas—is essential for any C++ programmer.



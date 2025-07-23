#include <iostream>
#include <string>
#include <vector>
using namespace std;

// User structure
struct User {
    string username;
    string password;
    double balance;
};

// Function to find a user by username and password
User* authenticateUser(const vector<User>& users, const string& username, const string& password) {
    for (const auto& user : users) {
        if (user.username == username && user.password == password) {
            return new User(user); // return a copy on heap (can delete later)
        }
    }
    return nullptr;
}

int main() {
    cout << "===== Welcome to Blacksheep Bank Login =====\n" << endl;

    // Sample users
    vector<User> users = {
        {"jamil", "1234", 55000.0},
        {"amina", "pass1", 7200.5},
        {"usman", "abc123", 30000.0},
        {"zainab", "z123", 15000.0},
        {"ahmed", "0000", 4200.75}
    };

    int attempts = 0;
    const int maxAttempts = 3;

    User* loggedInUser = nullptr;

    while (attempts < maxAttempts && !loggedInUser) {
        string inputUsername, inputPassword;

        cout << "Enter username: ";
        getline(cin, inputUsername);

        cout << "Enter password: ";
        getline(cin, inputPassword);

        loggedInUser = authenticateUser(users, inputUsername, inputPassword);

        if (!loggedInUser) {
            cout << "❌ Incorrect username or password. Please try again.\n" << endl;
            attempts++;
        }
    }

    if (loggedInUser) {
        // ✅ Access granted
        cout << "\n✅ Login successful!" << endl;
        cout << "Welcome, " << loggedInUser->username << "!" << endl;
        cout << "Your balance is: ₦" << loggedInUser->balance << endl;

        // cleanup (optional)
        delete loggedInUser;
    } else {
        // ❌ Access denied
        cout << "\n🚫 Login failed after " << maxAttempts << " attempts." << endl;
        cout << "Would you like to register instead? Visit: /register" << endl;
    }

    return 0;
}

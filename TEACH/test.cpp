#include <iostream>
#include <string>
#include <functional>
#include <algorithm>
using namespace std;

// Generic input validation + matching function
bool validateInput(
    const string& prompt,
    const string& expectedValue,
    function<bool(const string&)> formatValidator,
    int maxAttempts,
    const string& formatErrorMessage,
    const string& matchErrorMessage
) {
    string input;
    int attempts = 0;

    while (attempts < maxAttempts) {
        cout << prompt;
        getline(cin, input);

        // First check if input format is valid
        if (!formatValidator(input)) {
            cout << formatErrorMessage << endl;
            attempts++;
            continue;
        }

        // Now check if it matches the stored value
        if (input == expectedValue) {
            return true; // 🎯 Success
        } else {
            cout << matchErrorMessage << endl;
            attempts++;
        }
    }

    return false; // ❌ All attempts failed
}

int main() {
    cout << "===== LOGIN SYSTEM =====" << endl;

    // Predefined credentials
    const string storedUsername = "jamilbnusmann";
    const string storedPIN = "2125";

    // Validate username
    bool usernameValid = validateInput(
        "Enter username: ",
        storedUsername,
        [](const string& input) {
            return input.length() >= 4 && all_of(input.begin(), input.end(), ::isalnum);
        },
        3,
        "❌ Username must be at least 4 alphanumeric characters.",
        "❌ Username not recognized."
    );

    if (!usernameValid) {
        cout << "\n🚫 Login failed. Username attempts exceeded." << endl;
        return 1;
    }

    // Validate PIN
    bool pinValid = validateInput(
        "Enter 4-digit PIN: ",
        storedPIN,
        [](const string& input) {
            return input.length() == 4 && all_of(input.begin(), input.end(), ::isdigit);
        },
        3,
        "❌ PIN must be exactly 4 digits.",
        "❌ Incorrect PIN."
    );

    if (!pinValid) {
        cout << "\n🚫 Login failed. PIN attempts exceeded." << endl;
        return 1;
    }

    // ✅ Successful login
    cout << "\n✅ Login successful!" << endl;
    cout << "Welcome back, " << storedUsername << "!" << endl;

    return 0;
}

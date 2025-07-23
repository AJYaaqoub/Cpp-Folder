#include <iostream>
#include <string>
using namespace std;

// name.length();
// name.substr(0, 5);
// name.find("mil");
// name.replace(0, 5, "Abdu");

int main() {
    string name;
    name = "Jamil";
    name += " Usmann";

    // strings is an array
    
    cout << name << endl;
    cout << name.length() << endl <<  name.substr(3, 7);

    for (char c : name) {
        cout << c << " ";
    }

    return 0;
}
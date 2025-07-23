// ATM replica
#include <iostream>
#include <limits>
using namespace std;

// int getValidatedInt(const string&prompt){
//     int number;
//     while (true)
//     {
//         cout << prompt;
//         cin >> number;
//         if (cin.fail())
//         {
//             cin.clear();
//             cin.ignore(numeric_limits<streamsize>::max(), "\n");
//             cout << "Invalid input. please enter a valid integer \n ";
//         }
//         else
//         {
//             cin.ignore(numeric_limits<streamsize>::max(), "\n");
//             return number;
//         }
        
//     }
    
// }


int collectInput(){
    int choice;
    cout << "Choose an option to continue \n ";
    cin >> choice;

    return choice;
}
int handleSwitches(int arg , string username, string Pass){
    switch (arg)
    {
        case 1:
        cout << "Enter credentials to Login ¬\n";
        cout << "USERNAME🤵 _ _ _ _ _ _ _  " << " Password🔐_ _ _ _ _ _ _ 👀" << endl;
        cout << "Enter your Username! ";
        cin >> username;
        cout << "Enter your Password! ";
        cin >> Pass;
        break;
        
        case 2:
        cout << "Lets get you Started ¬ "; 
        break;

        default:
        cout << "Unknown Action ¬ ";
        break;
    }
}
int main(){
    float myBalance = 123456;
    string username, Pass;
    cout << "F O C bank 💰" << endl << endl ;
    cout << "Welcome back \n " << endl << "1. Login \n" << "2. Register \n" << endl;

    int choice = collectInput();

    handleSwitches(choice, username, Pass);
    cout << "Welcome " << username  << "\n \nYour Pass is "<< Pass;
    return 0;
}
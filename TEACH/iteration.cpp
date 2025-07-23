#include <iostream>
using namespace std;

int main() {
    int i = 1;
    do {
        cout << "Counter: " << i << endl;
        i++;
    } while (i <= 1);

    for (int i = 1; i <= 50; i++) {
        if (i % 2 == 0) cout << i << " ";
    }

    cout << endl;
      

    int n = 10, j = 1, sum = 0;
    while (j <= n) {
        sum += j;
        j++;
    }
    cout << "Sum: " << sum << endl;

    int num = 7, k = 1;
    do {
        cout << num << " x " << k << " = " << num * k << endl;
        k++;
    } while (k <= 12);

    int userNum;
    cout << "Enter a number: ";
    cin >> userNum;

    for (int i = 1; i <= 12; i++) {
        cout << userNum << " x " << i << " = " << userNum * i << endl;
    }

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
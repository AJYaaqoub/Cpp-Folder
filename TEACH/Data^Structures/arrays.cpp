#include <iostream>
using namespace std;

int main() {
    int score[3] = {12, 19, 35};

    for(int i = 0; i < 3; i++) {
        cout << score[i] << " , " << endl;
        cout << sizeof(score) / sizeof(score[0]) ;
    };

    return 0;
}
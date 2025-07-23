#include <iostream>
using namespace std;

int main() {
    cout << "========== Average Calculator ==========" << endl;

    float score[] = {12, 19, 3.5, 43, 16};
    int n = sizeof(score) / sizeof(score[0]) ;  //to calculate the length of the array
    int maxNum = score[0];
    int sum  = 0;
    // ;;;;;;;; = = = 
    for (int i = 0; i < n; i++)
    {
       sum += score[i];

       if (score[i] > maxNum)
       {
        maxNum = score[i];
       }
       
    };

    double average = sum / n;
    cout << "Maximum number is  " << maxNum << endl;
    cout << "Total sum is  " << sum << endl;
    cout << "Total average is  " << average << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int num, i;
    int isPrime = 1;
    cout << "Enter a number : ";
    cin >> num;
    if(num <= 1){
        isPrime=0;
    } 
    else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime==1)
        cout << num << " is a Prime Number";
    else
        cout << num << " is not a Prime Number";

    return 0;
}
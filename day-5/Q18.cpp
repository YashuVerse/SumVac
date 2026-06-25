#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int num; 
    int temp;
    int rem;
    int sum = 0;
    cout<<"Enter a number: ";
    cin>>num;
    temp = num;
    while (temp != 0) {
        rem = temp % 10;
        int fact = 1;
        for (int i = 1; i <= rem; i++) {
            fact *= i;
        }
        sum += fact;
        temp /= 10;
    }
    if(sum == num)
        cout<<num<<"Strong Number";
    else
        cout<<num<<"Strong Number";
    return 0;
}
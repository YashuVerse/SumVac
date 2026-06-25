#include <iostream>
using namespace std;

int main() {
    int num;
    int rev=0;

    cout << "Enter a number: ";
    cin >> num;
    int temp=num;
    while (num != 0) {
        int dig = num % 10;
        rev = rev*10 + dig;
        num = num/10;
    }

    if(rev==temp){
        cout<<"Number is Pallindrome";
    }
    else{
        cout<<"Number is not Pallindrome";
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int num;
    int rev=0;

    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {
        int dig = num % 10;
        rev = rev*10 + dig;
        num = num/10;
    }

    cout << "Reversed : " << rev;
    return 0;
}
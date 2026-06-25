#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int binary;
    int d = 0, i = 0, rem;

    cout << "Enter a binary number: ";
    cin >> binary;

    while (binary != 0) {
        rem = binary % 10;
        d = d + rem * pow(2, i);
        binary /= 10;
        i++;
    }
    cout << "Decimal = " << d;
    return 0;
}
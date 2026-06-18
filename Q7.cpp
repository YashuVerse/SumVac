#include <iostream>
using namespace std;

int main() {
    int n;
    int p=1;
    cout<<"Enter the Number";
    cin>>n;
    while(n!=0){
        p=p*(n%10);
        n=n/10;
    }
    cout<<"Product equal to -- "<<p;
    return 0;
}
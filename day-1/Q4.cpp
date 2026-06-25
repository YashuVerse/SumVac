#include <iostream>
using namespace std;
int main(){
    int n;
    int d=0;
    cout<<"Enter the number";
    cin>>n;
    while(n!=0){
        n=n/10;
        d++;
    }
    cout<<"Number of Digits : "<<d;
    return 0;
}
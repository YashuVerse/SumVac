#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,b;
    cout<<"enter the number";
    cin>>n;
    cout<<"Binary = ";
    while(n>0){
        b=n%2;
        cout<<b;
        n=n/2;
    }
    return 0;
}
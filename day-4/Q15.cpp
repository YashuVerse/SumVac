#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n,temp,d=0,sum=0 ,p;
    cout<<"Enter the Number";
    cin>>n;
    temp=n;
    while(n!=0){
        n=n/10;
        d++;
    }
    n=temp;
    while(n!=0){
        p=n%10;
        sum=sum+pow(p,d);
        n=n/10;
    }
    if(sum==temp){
        cout<<"Armstrong Number";
    } else{
        cout<<"Not Armstrong Number";
    }
    return 0;
}
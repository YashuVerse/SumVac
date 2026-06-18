#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"Enter the Number";
    cin>>n;
    for(int i=1; i<n; i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(sum==n){
        cout<<"Perfect Number";
    } else {
        cout<<"Not a Perfect Number";
    }
    return 0;
}
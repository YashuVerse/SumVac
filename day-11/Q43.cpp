#include <iostream>
using namespace std;
int sum(int a) {
    int prime=1;
    for(int i=2; i<a; i++){
        if(a%i==0){
            prime=0;
        }
        }
        if(prime==1){
            cout<<"Prime";
        } else {
            cout<<"Not prime";
        }
    }
int main() {
    int x;
    cout<<"Enter Number : ";
    cin>>x;
    cout<<sum(x);
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int n;
    int p=1;
    cout<<"Enter the number";
    cin>>n;
    cout<<"Factorial is -- ";
    for(int i=n; i>0; i--){
        p=p*i;
    }
    cout<<p;
    return 0;
}
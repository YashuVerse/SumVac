#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int x;
    cout<<"enter the number";
    cin>>x;
    int n;
    cout<<"enter the power";
    cin>>n;
    int p=1;
    for(int i=1;i<=n; i++){
        p=p*x;
    }
    cout<<p;
    return 0;
}
#include <iostream>
using namespace std;
int sum(int a) {
    int pro=1;
    for(int i=1; i<=a; i++){
        pro=pro*i;
    }
    cout<<"Fac = "<<pro;
}
int main() {
    int x;
    cout<<"Enter Numbers : ";
    cin>>x;
    cout<<sum(x);
    return 0;
}
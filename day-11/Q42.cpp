#include <iostream>
using namespace std;
int sum(int a,int b) {
    if(a>b){
        return a;
    } else {
        return b;
    }
}
int main() {
    int x,y;
    cout<<"Enter 2 Numbers : ";
    cin>>x>>y;
    cout<<sum(x, y);
    return 0;
}
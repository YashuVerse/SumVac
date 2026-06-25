#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of term : ";
    cin>>n;
    int a=1;
    int b=1;
    int c;
    for(int i=1; i<=n; i++){
        cout<<a<<std::endl;
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}

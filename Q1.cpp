#include <iostream>
using namespace std;
int main(){
    int sum=0;
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<"Sum is Equal to "<<sum;
    return 0;
}
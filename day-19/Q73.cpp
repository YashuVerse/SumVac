#include <iostream>
using namespace std;
int main() {
    int n, a[10],b[10],c[10];
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<n; i++)
        cin>>b[i];
    for(int i=0; i<n; i++)
        c[i]=a[i]+b[i];
    cout<<"Array: ";
    for(int i = 0; i < n; i++)
        cout<<c[i]<<" ";
    return 0;
}

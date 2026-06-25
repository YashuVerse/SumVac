#include <iostream>
using namespace std;
int main() {
    int n,arr[10];
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int maxFreq=0,element;
    for(int i=0; i<n; i++) {
        int count=1;
        for(int j=i+1; j<n; j++) {
            if(arr[i]==arr[j]) {
                count++;
            }
        }
        if(count>maxFreq) {
            maxFreq=count;
            element=arr[i];
        }
    }
    cout<<element<<endl;
    cout<<maxFreq;
    return 0;
}

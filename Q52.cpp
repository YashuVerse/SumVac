#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size :";
    int arr[n];
    int even=0; 
    int odd = 0;
    cout<<"Enter array : ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
        if(arr[i]%2==0)
            even++;
        else
            odd++;
    }
    cout << "Even : " << even << endl;
    cout << "Odd : " << odd << endl;
    return 0;
}
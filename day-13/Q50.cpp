#include <iostream>
using namespace std;
int main() {
    int n; 
    cout<<"Enter size : ";
    cin>>n;
    int arr[n];
    int sum=0;
    cout<<"Enter array : ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
        sum+=arr[i];
    }
    int avg=(int)sum/n;
    cout<<"Sum= "<<sum<<endl;
    cout << "Aver= " << avg << endl;
    return 0;
}
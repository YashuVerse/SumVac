#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number";
    cin>>n;
    cout << "Factors are : ";

    for (int i=1; i<=n; i++) {
        if (n%i==0) {
            cout<<i<<std::endl;
        }
    }

    return 0;
}


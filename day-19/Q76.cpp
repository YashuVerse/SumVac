#include <iostream>
using namespace std;
int main(){
    int n,a[3][3];
    int diagonal=0;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) {
            cin>>a[i][j];
        }
    }
    for(int i=0; i<n; i++) {
        diagonal += a[i][i];
    }
    cout<<"Diagonal Sum = "<<diagonal<<endl;
    return 0;
}
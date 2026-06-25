#include <iostream>
using namespace std;
int palindrome(int n) {
    int original=n,reverse=0;
    while(n>0){
        reverse=reverse * 10+n%10;
        n=n/10;
    }
    return original==reverse;
}
int main(){
    int num;
    cin>>num;
    if(palindrome(num))
        cout<<"Palindrome";
    else
        cout<<"Not Palindrome";
    return 0;
}

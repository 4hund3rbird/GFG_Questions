//Q.Return first number of a digit
#include<iostream>
using namespace std;
int main(){
    int n,r;
    cin>>n;
    while(n>10){
        n=n/10;
    }
    cout<<n;
    return 0;
}
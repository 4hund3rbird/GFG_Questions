#include<iostream>
using namespace std;
int main(){
    int n,r=1;
    cin>>n;
    while(n){
        r=r*n;
        n--;
    }
    cout<<r;
    return 0;
}
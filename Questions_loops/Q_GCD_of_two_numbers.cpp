#include<iostream>
using namespace std;
void findFactors(int n){
    int r=n;
    cout<<1<<' ';
    int i=2;
    while(n>1 && i<r){
        if(n%i==0){
            n/=i;
            cout<<i<<' ';
            i=2;
        }else{
            i++;
        }
    }
    cout<<r;
}

int main(){
    int a,b,gcd=1;
    cin>>a>>b;
    for(int i=1;i<min(a,b);i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    cout<<gcd;
    return 0;
}
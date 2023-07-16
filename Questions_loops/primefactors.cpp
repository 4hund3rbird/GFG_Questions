#include<iostream>
using namespace std;
bool isprime(int n){
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){

    int n=13195;
    if(isprime(n)){
        cout<<n;
    }else{
        for(int i=n/2;i>=2;i--){
        if(n%i==0 && isprime(i)){
            cout<<i;
            break;
        }
    }
    }
    return 0;
}
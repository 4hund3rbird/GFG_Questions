#include <iostream>
using namespace std;

int fibrecur(int n){
    if(n==0){
        return 0;
    }
    return n+fibrecur(n-1);
}
int main(){
    int i=0,j=1,k=0,n=10,sum=0;
    while(k<=n){
       i=j;
       j=k;
       k=i+j;
       if(j%2==0){
        sum+=j;
       }

    }
    cout<<sum;
    // cout<<fibrecur(10);
    return 0;
}
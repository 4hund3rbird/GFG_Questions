#include <iostream>
#include <cmath>
using namespace std;

int reverse(int &a){
    int c=a;
    int count=0;
    while(a>0){
        // cout<<n<<' '<<n%10<<endl;
        a/=10;
        count++;
    }
    int newnum=0;
    while(c>0){
        count--;
        newnum+=(c%10)*pow(10,count);
        cout<<newnum<<endl;
        c/=10;
    }
    return newnum;
}
int main(){
    int n=12345;
   
    return 0;
}
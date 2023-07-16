#include<iostream>
using namespace std;

#define fr(j) for(int i=0;i<j;i++)
#define zero(j) if(j==0)

int val(){
    static int val=16;
    return val--;
}

int main(){
    fr(10){
    // cout<<"Hello world"<<endl;
    }
    int i=0;
    zero(i){
        // cout<<"this is zero"<<endl;
    }
    // val();
    // val();
    // val();
    // cout<<val();
    char arr[]="gfg";
    for(auto p:arr){
        cout<<p;
    }
    cout<<endl;
    signed u=10;
    unsigned ul=20;
    long l=3003;
    long long ll=33030;

    // cout<<u<<ul<<l<<ll;

    for(val();val();val())

        // cout<<val();
    cout<<sizeof(printf("GeeksQuiz"));
    return 0;
}
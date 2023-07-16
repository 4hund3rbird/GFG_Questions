#include<iostream>
using namespace std;
int main(){
    int arr[]{1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    bool sorted=true;
    for(int i=1;i<n;i++){
       if(arr[i]<arr[i-1]){
        sorted=false;
        break;
       }
    }
    
    if(sorted){
        cout<<"Yes";
    }else{
        cout<<"NO";
    }
    return 0;
}
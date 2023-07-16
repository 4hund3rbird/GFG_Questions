#include<iostream>
using namespace std;
int main(){
    int arr[]{1,2,3,3,4,4,4,12,12,3,34,55,55};
    int count=0,n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        int dup=0;
        for(int j=i-1;j>=0;j--){
            if(arr[i]==arr[j]){
                dup++;
            }
        }
        if(dup==1){
            count++;
        }

    }
    cout<<count;
    return 0;
}
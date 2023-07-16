#include <iostream>
using namespace std;
int main(){
    int arr[5]={10,20,10,20,30};
    int count=0;
    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        int dup=0;
        for(int j=i-1;j>=0;j--){
            if(arr[i]==arr[j]){
                dup++;
                break;
            }
        }
        if(dup==0){
            count++;
        }
    }
    cout<<count;
    return 0;
}
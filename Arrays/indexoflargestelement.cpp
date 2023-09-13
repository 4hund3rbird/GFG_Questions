#include<bits/stdc++.h>
using namespace std;
 
int indexoflargestelement(int arr[],int n){

    int max_i=0;
    for(int i=1;i<n;i++){
        if(arr[i]>=arr[max_i]){
            max_i=i;
        }
    }
    return max_i;
}

int main()
{
    // cout<<'>'<<endl;
    int arr[]={10,5,20,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<indexoflargestelement(arr,n);
    return 0;
}



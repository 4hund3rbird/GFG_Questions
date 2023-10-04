#include<bits/stdc++.h>
using namespace std;

int secondlargestelement(int arr[],int n){
    int max=arr[0];
    int smax=-1;
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            smax=max;
            max=arr[i];
        }else if(arr[i]!=max){
            if(arr[i]>smax){
                smax=arr[i];
            }
        }
       
    }
    return smax;
    
    
}
 
int main()
{
int n=6,arr[n];
    for(int i=0;i<n;i++){cin>>arr[i];}
    // for(auto a:arr){cout<<a<<endl;}
    cout<<secondlargestelement(arr,n);
    return 0;
}
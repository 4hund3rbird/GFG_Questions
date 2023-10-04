#include<bits/stdc++.h>
using namespace std;

int maximumsumofkconsecutiveelements(int arr[],int n,int k){
    int sum=0;
    for(int i=0;i<k;i++){sum+=arr[i];}
    int max_sum=sum;
    for(int i=1;i<n-k+1;i++){
        sum-=arr[i-1];
        sum+=arr[i+k-1];
        if(sum>=max_sum){
            max_sum=sum;
        }
    }
    return max_sum;
} 

int main()
{
    int n,arr[n]={};
    cin>>n;
    for(int i=0;i<n;i++){cin>>arr[i];}
    int k;
    cin>>k;
    
    cout<<maximumsumofkconsecutiveelements(arr,n,k);
    // for(auto a:arr){cout<<a<<' ';}


   return 0;
}
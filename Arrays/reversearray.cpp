#include<bits/stdc++.h>
using namespace std;

void reversearray(int arr[],int n){
    int low=0,high=n-1;
    while(low<high){
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
}
 
int main()
{
    int n=6,arr[n];
    for(int i=0;i<n;i++){cin>>arr[i];}

    reversearray(arr,n);

    for(auto a:arr){cout<<a<<' ';}


   return 0;
}
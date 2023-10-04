#include<bits/stdc++.h>
using namespace std;

void removeduplicatesfromsorted(int arr[],int n){
    vector<int>distinct={};
    distinct.push_back(arr[0]);
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[i-1]){
            distinct.push_back(arr[i]);
        }
    }

    for(auto a:distinct){cout<<a<<" ";}
}

int  optimizedsoln(int arr[],int n){
    int r=1;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[r-1]){
            arr[r]=arr[i];
            r++;
        }
    }
    return r;
}
 
void naivesolution(int arr[],int n){
    int temp[n]={};
    int r=1;
    temp[0]=arr[0];
    for(int i=1;i<n;i++){
        if(temp[r-1]!=arr[i]){
            temp[r]=arr[i];
            r++;
        }
    }
    
    for(int i=0;i<n;i++){
        arr[i]=temp[i];
    }
}
int main()
{
    int n=6,arr[n];
    for(int i=0;i<n;i++){cin>>arr[i];}
    int r=optimizedsoln(arr,n);
    // cout<<r;
    for(int i=0;i<r;i++){
        cout<<arr[i]<<" ";
    }
    // for(auto a:arr){cout<<a<<' ';}


   return 0;
}
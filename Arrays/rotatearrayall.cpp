#include<bits/stdc++.h>
using namespace std;

void leftrotateby1(int arr[],int n){
    int e=arr[0];
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=e;
}

void rightrotateby1(int arr[],int n){
    int e=arr[n-1];
    for(int i=n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=e;
}
void reverse(int arr[],int low,int high){
    while(low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}

void leftrotatebyd(int arr[],int n,int d){
    // int temp;
    // for(int i=0;i<n-d;i++){
    //     temp=arr[i];
    //     arr[i]=arr[i+d];
    //     arr[i+d]=temp;
    // }
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
    
}



int main()
{
    int n=5,d,arr[n];
    cin>>d;
    for(int i=0;i<n;i++){cin>>arr[i];}
    leftrotatebyd(arr,n,d);
    for(auto a:arr){cout<<a<<' ';}


   return 0;
}
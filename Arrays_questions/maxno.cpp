#include<iostream>
using namespace std;
 
int main()
{
    int arr[]{2,233,43,5445,65,67,87,788};
    int max=INT16_MIN,min=INT16_MAX,range=max-min;
    for(int i=0;i< sizeof(arr)/sizeof(int);i++){
        if(arr[i]>=max){

            max=arr[i];
        }

        if(arr[i]<=min){

            min=arr[i];
        }
    }
    cout<<max<<" "<<min;
 
    return 0;
 
}
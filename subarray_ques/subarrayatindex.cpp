#include<iostream>
using namespace std;
 
int main()
{
    int e[4]={1,2,3,4};
    int arr[11]={43,54,65,67,87,89,12};
    int index=4;
    for(int i=0;i<sizeof(e)/sizeof(int);i++){
        int temp=e[i];
        for(int j=0;j<sizeof(arr)/sizeof(int);j++){
            if(j>=index){
                int t2=arr[j];
                arr[j]=temp;
                temp=t2;
            }
        }
        for(int x:arr)
        cout<<x<<" ";
        cout<<endl;
        index++;
    }
    for(int x:arr)
    cout<<x<<" ";
    return 0;
 
}
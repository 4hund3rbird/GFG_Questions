#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>set={};
    int arr[5]={1,2,3,3,4};
    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        int dub=0;
        for(int j=i-1;j>=0;j--){
            if(arr[i]==arr[j]){
                dub++;
            }
        }
        if(dub==0){
            set.push_back(arr[i]);
        }
    }
    for(int x:set)
        cout<<x<<' ';

 return 0;
}
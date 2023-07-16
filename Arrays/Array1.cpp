#include<iostream>
using namespace std;
int main(){

    int arr[]{1,2,3,4,5};
    string arr1[]{"aniekt","suraj","ganesh","aditya"};
    for(auto a:arr)
        cout<<a<<endl;
    for(auto a:arr1)
        cout<<a<<endl;

    return 0;
}
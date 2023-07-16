#include <iostream>
using namespace std;
int main(){
    int arr[]{1,2,3,4,5,6,7,8,9,10};
    int *ptr=arr;
    int *b=&arr[1];

    cout<<arr<<endl;
    cout<<&arr<<endl;
    cout<<*arr<<endl;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    cout<<*ptr<<endl;

    for(int i=0;i<9;i++){
        // ++*(arr+i);
        *(arr+i);
    }

    cout<<*arr<<*(arr+1)<<endl;
    for(int i=0;i<10;i++){
        cout<<*(arr+i)<<endl;
    }
    return 0;
}
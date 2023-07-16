#include<iostream>
using namespace std;

int &func(){
    static int x=20;
    return x;
}

void update(int &x){
    x++;
}

void print(const string &s){
    cout<<s<<endl;
}



int main(){
    int a=10;
    int &b=a;

    // cout<<sizeof(a)<<endl;
    // cout<<sizeof(b)<<" "<<b<<" "<<&b<<endl;

    // cout<<++b<<endl;
    // cout<<a<<endl;
    int &c=func();
    ++c;
    // cout<<c<<func()<<endl;

    int d=30;
    cout<<d<<endl;
    update(d);
    cout<<d<<endl;

    string e="Hello my name is Aniket :)";
    print(e);


    int arr[]{1,2,3,4,5,6,7,8,9,10};
    for(auto &x:arr){
        x++;
    }

    for(const auto &x:arr){
        cout<<x<<endl;
    }

    cout<<endl;

    const string &s="Helllo my name is aniket:)";
    cout<<s;
    return 0;
}
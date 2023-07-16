#include <iostream>
using namespace std;

void update(int *x){        //function parameters as a pointer variables
    ++*x;
}

void update(int &x){        //function parameters as a refrence variables
    ++x;
}

void main2(){
    static int a=10;
    update(&a);
    update(a);
    cout<<a<<endl;

}
int main(){
    int b=10;
    int *a=&b;
    cout<<a<<&b<<endl;
    cout<<*a<<*(&b)<<endl;
    cout<<&a<<endl;
    int **c=&a;
    cout<<c<<endl;
    cout<<*c<<endl;
    cout<<**c<<endl;
    cout<<&c<<endl;

    ++b;
    cout<<**c<<*a<<b<<endl;


    main2();

    return 0;
}
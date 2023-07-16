#include <iostream>
#include<iomanip>
using namespace std;
// this is for the module practice of cpp from gfg course

//floting point printing
int main(){

    //in cpp the double and float can print only upto 6 digits.
    cout<<std::setprecision(4);// it is used to increase or decrease the floating point number.
    double x=2.12;
    float y=2333e+005;
    cout<<x<<endl;
    cout<<y<<endl;

    cout<<std::fixed;
    x=2.12;
    cout<<x<<endl;
    cout<<y<<endl;

    cout<<std::scientific;
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<std::defaultfloat;
    //In both the cases the precision means the number of digits after the point.

    double z=40-20+2-2;
    cout<<z<<endl;
    x=10,y=20;
    int k=++x+10/--y+10;
    cout<<k;
    return 0;
}

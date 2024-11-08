#include <iostream>
using namespace std;
int d=9;


int main() {
    int  a,b ,c,d;

//SPACE RESOLUTION
std::cout << "global and local variable "<<endl;
cout<<"enter the value of a:"<<endl;
cin>> a;

cout<<"enter the value of b:"<<endl;
cin>> b;
c=a+b;
d=2;
cout<< "the sum of a and b:"<<c<<endl;
cout<<"value of global variable is:"<<::d<<endl;
cout<<"value of sum of a and b is:"<<d<<endl;



return 0;
}
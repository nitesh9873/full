#include <iostream>
using namespace std;
int main() {
int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t;
a=777;
b=a;
c=b;
d=c;
e=c;
h=a;
o=h;
g=a;
r=g;
s=c;
f=c;

//you can link a,b,c,d,e,f,g,h,i,j,k,l,m,n,o etc......in same file like above equation.
std::cout << "more pratice on refrence variable"<<endl;
cout<<"the value of b is:"<<b<<endl;
cout<<"the value of a is:"<<a<<endl;
cout<<"the value of c is:"<<c<<endl;
cout<<"the value of d is:"<<d<<endl;
cout<<"the value of e is:"<<e<<endl;
cout<<"the value of f is:"<<f<<endl;
cout<<"the value of g is:"<<g<<endl;
cout<<"the value of h is:"<<h<<endl;

return 0;
}
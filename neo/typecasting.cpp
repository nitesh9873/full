#include <iostream>
using namespace std;

int main() {
int a=45;
 float b=3.14 ;
int c=3.14;
std::cout << "typecasting"<<endl;

cout<<"the value of a is:"<<a<<endl;
cout<<"the value of b is:"<<b<<endl;
cout<<"the value of c is:"<<int(c) <<endl;
cout<<"the value of reference variable b is:"<<int(b)<<endl;
//b is float actually but after this(TYPECASTING) it will give you an integer.
//  HENCE I REACH TO THE POINT THAT IT IS APPLIED  AFTER SUCH TYPE OF VARIABLE  ONLY LIKE FLOAT,DOUBE,ETC.
//BECAUSE IF YOU WRITE 13.34 IT WIL AUTOMATICALLY TAKE IT AS 3.
//SO NO NEED OF THAT IN SUH CASE.
//LETS HAVE SOME PRACTIE ON TYPEASTING ;
int u=4;
float y =3.12332;
float x =3129.232;
cout<< "the value of a is :"<<u<<endl;
cout<< "the value of b is :" <<int(y)<<endl;
cout<< "the value of a+intb is :"<<u+int(y)<<endl;
cout<< "the value of intc+intb is :"<<int(x)+int(y)<<endl;
return 0;

}
#include <iostream>
using namespace std;

int main()
{

    int num1, num2;
    cout << "enter the value of num1:\n"; //"<<" this is called insertion operator means it will give data from your systemmmm to the user

    cin >> num1;                          // this is called extraction operator means it will ask data from user.

    cout << "enter the value of num2:\n"; //"<<" this is called insertion operator means it will give data to fill to the user 
    cin >> num2;                          // this ">>" is called extraction operator means it will ask data from user.

    cout << "the sum is" << num1 + num2;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    cout << "let prty";

    int a = 2;
    int b = 9;
    int c = 3;
    int d = 3;
    int e = 8;

    cout << " the value of a+b+c is:" << (a + b + c) - (d + e) << endl;

    cout << " the value of a+b+c is:" << a + b + c - d + e << endl;
    cout << " the value of a+b+c is:" << ((a - b) * 6) * 10 << endl;
    cout << " the value of a+b+c is:" << a + b + c - d + e * a;

    return 0;
}
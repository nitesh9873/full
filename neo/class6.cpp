// there are wi types of haeder files :
// 1.system header file : it comes with compiler
// for example 7. iostream
#include <iostream>
// 2. user defined header files: it is written by the programmer.
#include "form.h"
// it means at a same time a program can have both system header and user defined header

int main()
{
    // #include "this.h" but ths files shold be inside a particular directory otherwise it will produce ERROR

    using namespace std;

    cout << "this is hello world program ";
    // Writing namespace std we need not to write stdcout every time.before cout so that why we write to prefer at begining
    return 0;
}

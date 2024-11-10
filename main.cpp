#include <iostream>
#include "c.h"
using namespace std;
int main()
{
    B * obj = new B;
    cout << sizeof(*obj) << endl;
    cout << sizeof(obj) << endl;
    string a = "abcdefghigk";
    cout << sizeof(a) << endl;
    cout << "sizeof(string) =" <<sizeof(string) << endl;
    char * p;
    cout << "sizeof(p)" << sizeof(p) << endl;
    delete obj;
    return 0;
}

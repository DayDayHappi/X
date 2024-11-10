#include <iostream>
#include <string>
using namespace std;
 struct Info
 {
     int age;
 };

class A
{
    public:
    A(Info obj);
    A();
    ~A();
    private:
    Info _obj;

};

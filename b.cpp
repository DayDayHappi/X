#include "b.h"
A::A(Info obj)
:_obj(obj)
{
    /* data */
};
A::A()
{
    cout << "A() 无参构造" << endl;
};
A::~A()
{
    cout << "~A() 析构" << endl;
}

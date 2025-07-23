#include <iostream>
using namespace std;

void square(int *val)
{
    *val = *(val) * *(val);
}
int sq(int *val)
{
    return *val = *(val) * *(val);
}
int s(int &val)
{
    // int sv = val * val; // only reads the value and returns the read value. Does not change the actual value.
    return val = val * val;
}

void foo(int *p)
{
    int temp = 999;
    cout << "Before change: *p = " << *p << endl;
    p = &temp;
    cout << "After change: *p = " << *p << endl;
}

int main()
{

    int x = 10;
    int v = 2;
    int t = 5;
    cout << "value of x before: " << x << endl;
    cout << "value of v before: " << v << endl;
    cout << "value of t before: " << t << endl;
    square(&x);
    sq(&v);
    // int nt = s(t); // if read only
    s(t);
    cout << "value of x after: " << x << endl;
    cout << "value of v after: " << v << endl;
    cout << "value of t after: " << t << endl;

    for (int i = 1; i <= t; i++)
    {
        cout << i << endl;
    }

    int a = 10;
    foo(&a);
    cout << "\na in main = " << a << endl; // Still 10

    return 0;
}

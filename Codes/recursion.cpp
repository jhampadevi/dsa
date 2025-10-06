#include <iostream>
#include <math.h>
using namespace std;
int factorial(int n)
{
    // int biggerProblem;
    // int smallerProblem = factorial(n - 1);
    if (n != 0 && n > 1)
    {
        // biggerProblem = n * smallerProblem;
        // return biggerProbelm;
        return n * factorial(n - 1);
    }
    else
    {
        return 1;
    }
}
// Current function: calculates 2^n
int powerOf2(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return 2 * powerOf2(n - 1);
        /* How powerOf2(5) works:
         powerOf2(5) = 2 * powerOf2(4)
                     = 2 * (2 * powerOf2(3))
                     = 2 * (2 * (2 * powerOf2(2)))
                     = 2 * (2 * (2 * (2 * powerOf2(1))))
                     = 2 * (2 * (2 * (2 * (2 * powerOf2(0)))))
                     = 2 * (2 * (2 * (2 * (2 * 1))))
                     = 32 (which is 2^5)
        */
    }
}

// General power function: calculates base^exponent
int power(int base, int exponent)
{
    if (exponent == 0)
    {
        return 1;
    }
    else
    {
        return base * power(base, exponent - 1);
        /* How power(3, 4) works:
         power(3, 4) = 3 * power(3, 3)
                     = 3 * (3 * power(3, 2))
                     = 3 * (3 * (3 * power(3, 1)))
                     = 3 * (3 * (3 * (3 * power(3, 0))))
                     = 3 * (3 * (3 * (3 * 1)))
                     = 81 (which is 3^4)
        */
    }
}
int main()
{
    int n, base, ans1, ans2, ans3;
    cout << "Enter value for factorial: \n";
    cin >> n;
    ans1 = factorial(n);

    cout << "Enter base and exponent for power calculation: \n";
    cin >> base >> n;
    ans2 = power(base, n);

    cout << "Enter value for 2^n calculation: \n";
    cin >> n;
    ans3 = powerOf2(n);

    cout << "Factorial Answer: " << ans1 << endl;
    cout << "Power Answer (" << base << "^" << n << "): " << ans2 << endl;
    cout << "2^" << n << " Answer: " << ans3 << endl;
}

#include <iostream>
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
int main()
{
    int n, ans;
    cout << "Enter value: \n";
    cin >> n;
    ans = factorial(n);
    cout << "Answer: " << ans;
}
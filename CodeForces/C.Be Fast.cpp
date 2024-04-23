#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
long long f(long long n);
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout << fixed << setprecision(1);
    long long x;
    cin >> x;
    cout << f(x);
}
long long f(long long n)
{
    // formula to find the summation of natural numbers from 1 to n all of power 2
    return (n * (n + 1) * (2 * n + 1)) / 6;
}

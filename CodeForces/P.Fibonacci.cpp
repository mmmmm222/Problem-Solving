#include <iostream>
#include <iomanip>
using namespace std;

int freq[100000 + 1];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout << fixed << setprecision(1);
    int n;
    cin >> n;
    long long fib[n];
    fib[1] = 0, fib[2] = 1;
    for (int i = 3; i <= n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    cout << fib[n];
}

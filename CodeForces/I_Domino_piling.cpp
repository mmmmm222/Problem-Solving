#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout << fixed << setprecision(4);

    long long n, m, i = 0;
    cin >> n >> m;
    n = m * n;
    while (n > 1)
    {
        n -= 2;
        i++;
    }
    cout << i;

    return 0;
}
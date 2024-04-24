#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout << fixed << setprecision(4);

    long long n, i = 0;
    cin >> n;
    i = 1ll * n * (n + 1) / 2;
    cout << i;
}
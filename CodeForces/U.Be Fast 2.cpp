#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout << fixed << setprecision(1);
    int R, L, N;
    cin >> L >> R >> N;
    cout << ((R - L + 1) - ((R / N) - ((L - 1) / N)));
}
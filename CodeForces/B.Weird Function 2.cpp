#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

string f(bool x, string S1, string S2);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout << fixed << setprecision(1);
    string S1, S2;
    cin >> S1 >> S2;
    cout << f(1, f(1, f(0, S1, S2) + S1, S2), S1 + f(0, S1 + S2, f(1, S2, S1)));
}
string f(bool x, string S1, string S2)
{
    if (x == 0)
        return S2 + S1;
    else if (x == 1)
        return S1 + S2;
}

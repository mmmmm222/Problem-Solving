#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout << fixed << setprecision(1);
    string S;
    cin >> S;
    int l = 0, r = S.size() - 1, error = 0;
    while (l < r)
    {
        if (S[l] != S[r])
        {
            error++;
        }
        l++, r--;
    }
    if (error == 1 || (error == 0 && l == r))
        cout << "YES";
    else
        cout << "NO";
}

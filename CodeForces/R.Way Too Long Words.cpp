#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout << fixed << setprecision(1);
    int n;
    cin >> n;
    while (n--)
    {
        string S;
        cin >> S;
        if (S.size() > 10)
        {
            cout << S[0] << S.size() - 2 << S[S.size() - 1] << '\n';
        }
        else
        {
            cout << S << '\n';
        }
    }
}
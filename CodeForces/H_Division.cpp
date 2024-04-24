#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout << fixed << setprecision(4);

    long long t, x;
    cin >> t;
    while (t--)
    {
        cin >> x;
        if (x <= 1399)
            cout << "Division 4\n";
        else if (x >= 1400 && x <= 1599)
            cout << "Division 3\n";
        else if (x >= 1600 && x <= 1899)
            cout << "Division 2\n";
        else if (x >= 1900)
            cout << "Division 1\n";
    }
    return 0;
}
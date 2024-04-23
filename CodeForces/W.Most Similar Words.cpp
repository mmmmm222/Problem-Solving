#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout << fixed << setprecision(1);
    int t, x, y, sum = 0;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string arr[n];
        // take the strings from user
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        // compare first string with others
        int ans = INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int cost = 0;
                for (int k = 0; k < m; k++)
                {
                    cost += abs(arr[i][k] - arr[j][k]);
                }
                ans = min(ans, cost);
            }
        }
        cout << ans << '\n';
    }
}
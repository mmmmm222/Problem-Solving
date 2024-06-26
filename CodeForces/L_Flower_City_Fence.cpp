/*                                      بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم
قَالَ رَبِّ اشْرَحْ لِي صَدْرِي (25) وَيَسِّرْ لِي أَمْرِي (26) وَاحْلُلْ عُقْدَةً مِّن لِّسَانِي (27) يَفْقَهُوا قَوْلي             */

#include <bits/stdc++.h>
#define ln "\n"
typedef long long ll;
using namespace std;

ll arr[200005], par[200005];

void solve()
{
    memset(par, 0, sizeof par);
    memset(arr, 0, sizeof arr);
    int n = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    if (arr[1] > 200001 || arr[1] != n)
    {
        cout << "NO" << ln;
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        par[1]++;
        par[arr[i] + 1]--;
    }
    for (int i = 1; i <= n; i++)
    {
        par[i + 1] += par[i];
    }
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] != par[i])
        {
            cout << "NO" << ln;
            return;
        }
    }
    cout << "YES" << ln;
}

void Main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout << fixed << setprecision(12);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("errors.txt", "w", stderr);
#endif
    //--------------------
    // int t;cin>>t;
    Main();
}

/*                                      بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم
قَالَ رَبِّ اشْرَحْ لِي صَدْرِي (25) وَيَسِّرْ لِي أَمْرِي (26) وَاحْلُلْ عُقْدَةً مِّن لِّسَانِي (27) يَفْقَهُوا قَوْلي             */

#include <bits/stdc++.h>
#define ln "\n"
typedef long long ll;
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll arr[n + 1] = {0}, sorted[n + 1] = {0};
    for (ll i = 1; i <= n; i++)
    {
        cin >> arr[i];
        sorted[i] = arr[i];
        arr[i] += arr[i - 1];
    }
    sort(sorted, sorted + n + 1);
    for (ll i = 1; i <= n; i++)
    {
        sorted[i] += sorted[i - 1];
    }

    ll q;
    cin >> q;
    while (q--)
    {
        int x, l, r;
        cin >> x >> l >> r;
        if (x == 1)
        {
            cout << arr[r] - arr[l - 1] << ln;
        }
        else if (x == 2)
        {
            cout << sorted[r] - sorted[l - 1] << ln;
        }
    }
}

void Main()
{
    int t = 1;
    // cin>>t;
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

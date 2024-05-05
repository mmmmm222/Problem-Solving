/*                                      بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم
قَالَ رَبِّ اشْرَحْ لِي صَدْرِي (25) وَيَسِّرْ لِي أَمْرِي (26) وَاحْلُلْ عُقْدَةً مِّن لِّسَانِي (27) يَفْقَهُوا قَوْلي             */

#include <bits/stdc++.h>
#define ln "\n"
typedef long long ll;
using namespace std;

void solve()
{
    ll N = 100001;
    ll updates[N] = {0};
    ll q;
    cin >> q;
    ll mxr = 0;
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        updates[l]++;
        updates[r + 1]--;
        // mxr = max(mxr, r);
    }
    for (int i = 1; i <= N; ++i)
    {
        updates[i] += updates[i - 1];
    }

    long long ans = 0;
    for (ll i = 1; i < N; ++i)
    {
        ans = max(ans, updates[i]);
    }
    cout << ans;
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

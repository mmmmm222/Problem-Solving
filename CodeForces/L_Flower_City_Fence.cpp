/*                                      بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم
قَالَ رَبِّ اشْرَحْ لِي صَدْرِي (25) وَيَسِّرْ لِي أَمْرِي (26) وَاحْلُلْ عُقْدَةً مِّن لِّسَانِي (27) يَفْقَهُوا قَوْلي             */

#include <bits/stdc++.h>
#define ln "\n"
typedef long long ll;
using namespace std;

void solve()
{
    int n;
    cin >> n;
    ll arr[n] = {0}, div1[n + 1] = {0}, div2[n + 1] = {0};
    cin >> arr[0];
    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];
        div1[i] = abs(arr[i] - arr[i - 1]);
    }
    for (int i = n - 1; i > 0; i--)
    {
        div2[i] = abs(arr[i] - arr[i - 1]);
    }
    for (int i = 1; i <= n; i++)
    {
        if (div1[i] != div2[i])
        {
            cout << "NO" << ln;
            return;
        }
    }
    cout << "YES" << ln;

    // for(int i=1; i<n; i++) {
    //     cout<<div1[i]<<" ";
    // }
    // cout<<ln;
    // for(int i=1; i<n; i++) {
    //     cout<<div2[i]<<" ";
    // }
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

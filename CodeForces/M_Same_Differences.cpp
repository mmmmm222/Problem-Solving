/*                                      بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم
    قَالَ رَبِّ اشْرَحْ لِي صَدْرِي (25) وَيَسِّرْ لِي أَمْرِي (26) وَاحْلُلْ عُقْدَةً مِّن لِّسَانِي (27) يَفْقَهُوا قَوْلي             */

#include <bits/stdc++.h>
#define ln "\n"
typedef long long ll;
using namespace std;

ll freq[400001] = {0};

void solve()
{
    int n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> (arr[i]);
        arr[i] -=i;
        freq[arr[i] + 200000]++;
    }
    ll res = 0;
    for (int i = 0; i < n; i++)
    {
        res += (freq[arr[i] + 200000] - 1);
        freq[arr[i] + 200000]--;
    }
    cout << res << ln;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout << fixed << setprecision(12);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}

// for (int i = 0; i < n; i++)
// {
//     cout << freq[arr[i] + 200000] << " ";
// }
// cout << ln;
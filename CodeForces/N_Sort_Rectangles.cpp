/*                                      بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم
                قَالَ رَبِّ اشْرَحْ لِي صَدْرِي (25) وَيَسِّرْ لِي أَمْرِي (26) وَاحْلُلْ عُقْدَةً مِّن لِّسَانِي (27) يَفْقَهُوا قَوْلي             */

#include <bits/stdc++.h>
#define ln "\n"
typedef long long ll;
using namespace std;

bool cmp(pair<ll, ll> a, pair<ll, ll> b)
{
    return a.first < b.first;
}

void solve()
{
    ll n, cnt = 0, mnx = 1e5, mxx = 0, mny = 1e5, mxy = 0;
    cin >> n;
    vector<pair<ll, ll>> area(n);
    pair<ll, ll> rec[4];
    while (n--)
    {

        mnx = 1e5, mxx = 0, mny = 1e5, mxy = 0;
        for (ll i = 0; i < 4; i++)
        {
            cin >> rec[i].first >> rec[i].second;
            mnx = min(mnx, rec[i].first);
            mxx = max(mxx, rec[i].first);
            mny = min(mny, rec[i].second);
            mxy = max(mxy, rec[i].second);
        }
        area[cnt].first = (((mxx - mnx) * (mxy - mny)));
        area[cnt].second = cnt;
        cnt++;
    }

    sort(area.begin(), area.end(), cmp);

    //  [](const pair<ll, ll> &a, const pair<ll, ll> &b
    //  { return a.first < b.first; });

    for (ll i = 0; i < cnt; i++)
    {
        cout << area[i].second + 1 << " " << area[i].first;
        cout << ln;
    }
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout << fixed << setprecision(12);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
}
/*                                      بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم
قَالَ رَبِّ اشْرَحْ لِي صَدْرِي (25) وَيَسِّرْ لِي أَمْرِي (26) وَاحْلُلْ عُقْدَةً مِّن لِّسَانِي (27) يَفْقَهُوا قَوْلي             */

#include <bits/stdc++.h>
#define ln "\n"
typedef long long ll;
using namespace std;

int x= 1004;

ll par[200005] ,pre[200005];

void solve()
{
    ll n,k,q,rmx=200005;cin>>n>>k>>q;
    for(int i=1; i<=n;i++) {
        ll l,r;cin>>l>>r;
        par[l]++,par[r+1]--;        //put one at the position where the sensor start and -1 at the pos where it finish then do prefix sum
        // rmx = max(rmx ,r);
    }
    for(int i=1; i<=rmx; i++) {
        par[i]+=par[i-1];           //prefix sum to get how many sensors cover the point
    }
    for(int i=1; i<=rmx; i++) {
        if(par[i]>=k)   // i want to know if this point will be ok or not
            pre[i]++;
    }
    for(int i=1; i<=rmx+1; i++) {       //to avoide time limit i do prefix then get l ,r then get the summation of the (ok) points between them
        pre[i]+=pre[i-1];
    }
    while(q--) {
        int l,r;cin>>l>>r;
        ll ans=0;
        ans = pre[r] - pre[l-1];
        cout<<ans<<ln;
    }
}

void Main()
{
    int t = 1;
    // cin >> t;
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

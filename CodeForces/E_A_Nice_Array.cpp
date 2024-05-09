/*                                      بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم
قَالَ رَبِّ اشْرَحْ لِي صَدْرِي (25) وَيَسِّرْ لِي أَمْرِي (26) وَاحْلُلْ عُقْدَةً مِّن لِّسَانِي (27) يَفْقَهُوا قَوْلي             */

#include <bits/stdc++.h>
#define ln "\n"
typedef long long ll;
using namespace std;

ll freq[100005] = {0};
void solve()
{
    memset(freq ,0,sizeof freq);
    ll n,x,f=0;cin>>n;
    for(int i=1; i<=n; i++) {
        cin>>x;
        freq[x]++;
        if(freq[x]>1) {
            f=1;
        }
    }

    cout <<( f? "NO" :"YES")<<ln;
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

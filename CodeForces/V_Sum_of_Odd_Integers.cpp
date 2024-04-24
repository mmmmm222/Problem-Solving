/*                                              بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم
                    قَالَ رَبِّ اشْرَحْ لِي صَدْرِي (25) وَيَسِّرْ لِي أَمْرِي (26) وَاحْلُلْ عُقْدَةً مِّن لِّسَانِي (27) يَفْقَهُوا قَوْلي             */

#include <bits/stdc++.h>
#define ln "\n"
typedef  long long ll;
using namespace std;
#define loop(n)   for(int i=0 ; i<(n);i++)

ll mul(ll a, ll b) {
    return (1LL * a * b);
}

ll fastpow(ll b, ll p) {
    if (b == 1 or p == 0)
        return 1;

    ll ret = fastpow(b, p >> 1);
    ret = mul(ret, ret);

    if (p & 1)
        ret = mul(ret, b);

    return ret;
}


void solve() {
    ll n, m;
    cin>>n>>m;

    if(n%2 == m%2 && m*m <= n )
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}
void Main() {
    int t = 1;
    cin>>t;
    while(t--) {
        solve();
    }
}





























int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout << fixed << setprecision(1);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("errors.txt", "w", stderr);
#endif
    //--------------------
        // int t;cin>>t;
    Main();
}

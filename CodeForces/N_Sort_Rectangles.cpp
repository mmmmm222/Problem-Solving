/*                                      بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم
                قَالَ رَبِّ اشْرَحْ لِي صَدْرِي (25) وَيَسِّرْ لِي أَمْرِي (26) وَاحْلُلْ عُقْدَةً مِّن لِّسَانِي (27) يَفْقَهُوا قَوْلي             */

#include <bits/stdc++.h>
#define ln "\n"
typedef  long long ll;
#define long long int;
using namespace std;


void solve() {
    ll n,cnt=0,mnx=WINT_MAX,mxx=WINT_MIN,mny=WINT_MAX,mxy=WINT_MIN;cin>>n;
    pair<ll ,ll> area[n];
    pair<ll ,ll> rec[4];
    while(n--) {
        mnx=WINT_MAX,mxx=WINT_MIN,mny=WINT_MAX,mxy=WINT_MIN;
        for(int i=0; i<4; i++) {
            cin>> rec[i].first >> rec[i].second;
            mnx = min(mnx,rec[i].first);
            mxx = max(mxx,rec[i].first);
            mny = min(mny,rec[i].second);
            mxy = max(mxy,rec[i].second);
        }
        area[cnt].first = ((mxx-mnx)*(mxy-mny));
        area[cnt].second = cnt;
        cnt++;
    }
    sort(area,area+cnt);
    for(int i =0; i<cnt; i++) {
        cout << area[i].second+1 <<" "<<area[i].first;
        cout << ln;
    }
}

void Main() {
    int t = 1;
    // cin>>t;
    while(t--) {
        solve();
    }
}




























int main(){

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

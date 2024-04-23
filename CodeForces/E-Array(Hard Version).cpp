/*                                              بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم
                    قَالَ رَبِّ اشْرَحْ لِي صَدْرِي (25) وَيَسِّرْ لِي أَمْرِي (26) وَاحْلُلْ عُقْدَةً مِّن لِّسَانِي (27) يَفْقَهُوا قَوْلي             */

#include <bits/stdc++.h>
#define ln "\n"
typedef  long long ll;
using namespace std;

const long long Max = 2e5+5;
// const int shift = 1e6;

ll prefix[Max];

void solve() {
    int n;cin>>n;
    ll arr[n];
    for(int i=1; i<=n; i++) {
        cin>>arr[i];
        prefix[i] += arr[i] + prefix[i-1];
    }
    int t;cin>>t;
    while (t--) {
        ll r,l;cin>>l>>r;
        cout << (prefix[r] - prefix [l-1]) << ln;
    }
}

void Main() {
    int t = 1;
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

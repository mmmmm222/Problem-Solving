/*                                              بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم
                    قَالَ رَبِّ اشْرَحْ لِي صَدْرِي (25) وَيَسِّرْ لِي أَمْرِي (26) وَاحْلُلْ عُقْدَةً مِّن لِّسَانِي (27) يَفْقَهُوا قَوْلي             */

#include <bits/stdc++.h>
#define ln "\n"
typedef  long long ll;
using namespace std;

void solve() {
    ll s,n;cin>>s>>n;
    vector<pair<int ,int>> v(n);
    for(int i=0; i<n; i++) {
        cin>> v[i].first >> v[i].second;
    }
    sort(v.begin() , v.end());
    for(int i=0; i<n; i++) {
        if(v[i].first >= s) {
            cout << "NO";
            return;
        }
        else {
            s+= v[i].second;
        }
    }
    cout << "YES";
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

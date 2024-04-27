/*                                              بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم
                    قَالَ رَبِّ اشْرَحْ لِي صَدْرِي (25) وَيَسِّرْ لِي أَمْرِي (26) وَاحْلُلْ عُقْدَةً مِّن لِّسَانِي (27) يَفْقَهُوا قَوْلي             */

#include <bits/stdc++.h>
#define ln "\n"
typedef  long long ll;
using namespace std;

void solve() {
    int n,m;cin>>n>>m;
    vector<pair<int , int>> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i].first;
        v[i].second = i;
    }
    while (v.size() > 1) {
        for(int i =0; i<v.size(); i++) {
            v[i].first -= m;
            if(v[i].first <=0) {
                v.erase(v.begin()+i);
                i--;
            }
        }
    }
    cout << v.begin()->second+1;
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

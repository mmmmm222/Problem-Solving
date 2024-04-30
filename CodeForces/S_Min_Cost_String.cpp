/*                                      بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم
قَالَ رَبِّ اشْرَحْ لِي صَدْرِي (25) وَيَسِّرْ لِي أَمْرِي (26) وَاحْلُلْ عُقْدَةً مِّن لِّسَانِي (27) يَفْقَهُوا قَوْلي             */

#include <bits/stdc++.h>
#define ln "\n"
typedef  long long ll;
using namespace std;


void solve() {

    vector<pair<int , char>> p;
    string s;cin>>s;
    for(int i =0; i<26; i++) {
        cin>>p[i].second;
        p[i].first='a'+i;
    }
    for(int i=0; i<s.size(); i++) {
        if(s[i] == '?') {
            //check cost
        }
    }
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

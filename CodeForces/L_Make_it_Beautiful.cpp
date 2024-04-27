/*                                      بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم
                قَالَ رَبِّ اشْرَحْ لِي صَدْرِي (25) وَيَسِّرْ لِي أَمْرِي (26) وَاحْلُلْ عُقْدَةً مِّن لِّسَانِي (27) يَفْقَهُوا قَوْلي             */

#include <bits/stdc++.h>
#define ln "\n"
typedef  long long ll;
using namespace std;

bool beautiful(vector<int> v , int n , vector<int> pre) {
    for(int i=0; i<n; i++) {
        if(v[i+1] == pre[i]) {
            return false;
        }
    }
    return true;
}
void solve() {
    int n;cin>>n;
    vector<int> pre(n);
    vector<int> v(n);
    cin>>v[0];
    pre[0]= v[0];
    for(int i=0; i<n; i++) {
        cin>>v[i];
        pre[i] = v[i] + pre[i-1];
    }
    if(v.size() == 2 && v[0] == v[1]) {
        cout <<"NO"<<ln;
        return;
    }
    sort(v.rbegin(), v.rend());
    if(beautiful(v,n,pre)) {
        cout << "YES\n";
        for(int i=0; i<n; i++) {
            cout << v[i] << " ";
        }
    }
    else {
        for(int i=0; i<n; i++) {
            swap(v[i+1])
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

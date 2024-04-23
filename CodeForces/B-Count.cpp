/*                                              بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم
                    قَالَ رَبِّ اشْرَحْ لِي صَدْرِي (25) وَيَسِّرْ لِي أَمْرِي (26) وَاحْلُلْ عُقْدَةً مِّن لِّسَانِي (27) يَفْقَهُوا قَوْلي             */

#include <bits/stdc++.h>
#define ln "\n"
typedef  long long ll;
using namespace std;

// const int Max = 2e6+5;
// const int shift = 1e6;
// ll freq[Max];


void solve() {
    int n,m; cin >>n>>m;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    int q,x,l,r,cnt=0;
    while(m--) {
        cin>>l>>r>>x;
        l--,r--;
        cnt=0;
        for(int i=l; i<=r; i++) {
            if(arr[i]==x)
                cnt++;
        }
        cout <<cnt <<ln;
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

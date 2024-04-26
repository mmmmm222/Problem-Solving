/*                                              بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم
                    قَالَ رَبِّ اشْرَحْ لِي صَدْرِي (25) وَيَسِّرْ لِي أَمْرِي (26) وَاحْلُلْ عُقْدَةً مِّن لِّسَانِي (27) يَفْقَهُوا قَوْلي             */

#include <bits/stdc++.h>
#define ln "\n"
typedef  long long ll;
using namespace std;

// const long long Max = 1e8+5;
// const int shift = 1e6;
// ll prefix[Max];
// queue<int> q;

void solve() {
    int n,l=0,r; cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    r=n-1;

    while(r>l) {
        if(arr[r]==arr[l]) {

            r--;l++;
        }
        else {
            cout<<"NO";
            return;
        }

    }
    cout<<"YES";

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

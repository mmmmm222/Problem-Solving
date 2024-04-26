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
    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    for(int i = 0; i<n/2; i++) {
        cout << arr[i] <<" ";
    }
    for(int i =(n/2)-1; i>=0; i--) {
        cout << arr[i] <<" ";
    }
    cout << ln;
    reverse(arr.begin(), arr.end());
    for(int i =0; i<n/2; i++) {
        cout << arr[i] <<" ";
    }
    for(int i =(n/2)-1; i>=0; i--) {
        cout << arr[i] <<" ";
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

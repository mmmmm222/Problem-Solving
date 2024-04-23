/*                                              بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم
                    قَالَ رَبِّ اشْرَحْ لِي صَدْرِي (25) وَيَسِّرْ لِي أَمْرِي (26) وَاحْلُلْ عُقْدَةً مِّن لِّسَانِي (27) يَفْقَهُوا قَوْلي             */

#include <bits/stdc++.h>
#define ln "\n"
typedef  long long ll;
using namespace std;

const int Max = 2e6+5;
const int shift = 1e6;
long long freq[Max];

void solve() {
    int n; cin >>n;
    int arr[n];
    freq[0 + shift] = 1;
    long long ans = 0 ,sum = 0;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
        sum+=arr[i];
        ans += freq[sum + shift];
        freq[sum + shift]++;
    }
    cout << ans;

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

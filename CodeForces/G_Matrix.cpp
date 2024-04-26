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
    int n ;cin>>n;
    ll sum1=0,sum2=0;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) {
            cin>>arr[i][j];
            if(i==j) {
                sum1+=arr[i][j];
            }
            if(i+j==n-1) {
                sum2+=arr[i][j];
            }
        }
    }
    cout<<abs(sum1-sum2);
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

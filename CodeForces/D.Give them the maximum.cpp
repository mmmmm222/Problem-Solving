/*                                              بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم
                    قَالَ رَبِّ اشْرَحْ لِي صَدْرِي (25) وَيَسِّرْ لِي أَمْرِي (26) وَاحْلُلْ عُقْدَةً مِّن لِّسَانِي (27) يَفْقَهُوا قَوْلي             */
#include <bits/stdc++.h>
using namespace std;

    void solve() {
        long long n,t;cin>>n>>t;
        long long arr[n];
        for(int i=0; i<n; i++) {
            cin>>arr[i];
        }
        for(int i=1; i<n; i++) {
            arr[i]+= arr[i-1];
        }
        while(t--) {
            int l,r;cin>>l>>r;
            l--,r--;
            long long ans=0;
            ans = arr[r];
            if(l!=0)
                ans-=arr[l-1];
            cout<<ans<<'\n';
        }
    }


int main() {
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
        solve();
}
/*                                              بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم
                    قَالَ رَبِّ اشْرَحْ لِي صَدْرِي (25) وَيَسِّرْ لِي أَمْرِي (26) وَاحْلُلْ عُقْدَةً مِّن لِّسَانِي (27) يَفْقَهُوا قَوْلي             */
#include <bits/stdc++.h>
using namespace std;

    void solve() {
            int n;cin>>n;
            long long arr[n];
            for(int i=0; i<n; i++) {
                cin>>arr[i];
                arr[i]--;
            }
            for(int i=1; i<n; i++) {
                arr[i] += arr[i-1];
            }
            for(int i=0; i+1 < n; i++) {
                if(arr[i] == arr[n-1] - arr[i]) {
                    cout<< i+1 <<'\n';
                    return;
                }
            }
            cout <<-1 <<'\n';
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
        int t;cin>>t;
        while(t--) {
            solve();
        }
}
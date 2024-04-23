/*                                              بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم
                    قَالَ رَبِّ اشْرَحْ لِي صَدْرِي (25) وَيَسِّرْ لِي أَمْرِي (26) وَاحْلُلْ عُقْدَةً مِّن لِّسَانِي (27) يَفْقَهُوا قَوْلي             */
#include <bits/stdc++.h>
using namespace std;

    void solve() {
        int n,m;cin>>n>>m;
        int arr[n][m];
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                cin>> arr[i][j];
            }
        }
        long long sum = 0 , ans = 0;
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                sum = arr[i][j];
                for(int k = 1; k< max(m,n); k++) {
                    if(i+k < n && j+k < m)
                        sum += arr[i+k][j+k];
                    if(i+k < n && j-k >=0)
                        sum += arr[i+k][j-k];
                    if(i-k >= 0 && j+k < m)
                        sum += arr[i-k][j+k];
                    if(i-k >= 0 && j-k >= 0)
                        sum += arr[i-k][j-k];
                }
                ans = max(ans , sum);
            }
        }
        cout <<ans <<'\n';
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
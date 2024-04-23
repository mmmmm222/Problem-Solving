/*
                                            بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم

                    قَالَ رَبِّ اشْرَحْ لِي صَدْرِي (25) وَيَسِّرْ لِي أَمْرِي (26) وَاحْلُلْ عُقْدَةً مِّن لِّسَانِي (27) يَفْقَهُوا قَوْلي

 */
#include <bits/stdc++.h>
using namespace std;

void solve() {

    int t,n;cin>>t;
    while(t--) {
        cin>>n;
        int arr[n];
        for(int i=0; i<n;i++) {
            cin>>arr[i];
        }
        int ans=1,flag=0;
        for(int i=0; i<n; i++) {
            if(arr[i]==0 ) {
                if(!flag && i!=0) {
                    ans =-1;
                    flag = arr[i];
                    break;
                }
                else
                    flag =arr[i];
            }
            else {
                if(!flag) {
                    ans+=1;
                    flag = arr[i];
                }
                else {
                    ans+=5;
                    flag = arr[i];
                }
            }
        }
        cout <<ans<<'\n';
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
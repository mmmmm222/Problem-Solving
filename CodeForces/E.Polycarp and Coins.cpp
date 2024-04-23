/*                                              بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم
                    قَالَ رَبِّ اشْرَحْ لِي صَدْرِي (25) وَيَسِّرْ لِي أَمْرِي (26) وَاحْلُلْ عُقْدَةً مِّن لِّسَانِي (27) يَفْقَهُوا قَوْلي             */
#include <bits/stdc++.h>
using namespace std;

    void solve() {
        int t;cin>>t;
        while(t--) {
            int n;cin>>n;
            int temp = n/3;
            int rem = n - ( temp + 2*temp);
            long long c1=temp,c2=temp;
            if(rem == 1)
                c1++;
            else if(rem == 2)
                c2++;
            else if(rem == 0) {
            }
            cout << c1 <<" "<<c2<<'\n';
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
/*                                      بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم
قَالَ رَبِّ اشْرَحْ لِي صَدْرِي (25) وَيَسِّرْ لِي أَمْرِي (26) وَاحْلُلْ عُقْدَةً مِّن لِّسَانِي (27) يَفْقَهُوا قَوْلي             */

#include <bits/stdc++.h>
#define ln "\n"
typedef  long long ll;
using namespace std;

void solve() {
    ll n,oddcnt=0,evencnt=0; cin>>n;
    int arr[n+1];
    for(int i =1; i<=n; i++) {
        cin>>arr[i];
        if(i%2==0) {
            evencnt+=arr[i];
        }
        else
            oddcnt+=arr[i];
    }
    if (evencnt > oddcnt)
        cout<<"Even";
    else if(evencnt < oddcnt)
        cout<<"Odd";
    else
        cout<<"Equal";


}

void Main() {
    int t = 1;
    // cin>>t;
    while(t--) {
        solve();
        cout << ln;
    }
}




























int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout << fixed << setprecision(12);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("errors.txt", "w", stderr);
#endif
    //--------------------
    // int t;cin>>t;
    Main();
}

/*                                              بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم
                    قَالَ رَبِّ اشْرَحْ لِي صَدْرِي (25) وَيَسِّرْ لِي أَمْرِي (26) وَاحْلُلْ عُقْدَةً مِّن لِّسَانِي (27) يَفْقَهُوا قَوْلي             */

#include <bits/stdc++.h>
#define ln "\n"
typedef  long long ll;
using namespace std;

// typedef struct {
//     string p1,p2,p3,p4;
// }st;
void solve() {
    int n;cin>>n;
    string arr[n],temp;
    for(int i=0; i<n; i++) {
        for(int j=0; j<4; j++) {
            cin >> temp;
            arr[i] += temp;
        }
    }
    for(int i = 0; i<n-1; i++) {
        if(arr[i] != arr[i+1]) {
            cout << "you were right";
            return;
        }
    }
    cout <<"Empedocles was right";
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

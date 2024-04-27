/*                                      بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم
                قَالَ رَبِّ اشْرَحْ لِي صَدْرِي (25) وَيَسِّرْ لِي أَمْرِي (26) وَاحْلُلْ عُقْدَةً مِّن لِّسَانِي (27) يَفْقَهُوا قَوْلي             */

#include <bits/stdc++.h>
#define ln "\n"
typedef  long long ll;
using namespace std;

bool take_one(int n) {
    if(n-1 <= 0) {
        return true;
    }
    else return false;
}
bool take_two(int n) {
    if(n-2 <= 0) {
        return true;
    }
    else return false;
}
bool take_three(int n) {
    if(n-3 <= 0) {
        return true;
    }
    else return false;
}

void solve() {
    int n,flag=0;cin>>n;
    while(n>0) {
        if(take_three(n) && flag == 0) {
            cout <<"Emad";
            return;
        }
        if(take_two(n) && flag == 0) {
            cout <<"Emad";
            return;
        }
        if(take_one(n) && flag == 0) {
            cout <<"Emad";
            return;
        }
        n-=3;flag=1;
        if(take_three(n) && flag == 1) {
            cout <<"Joker";
            return;
        }
        if(take_two(n) && flag == 1) {
            cout <<"Joker";
            return;
        }
        if(take_one(n) && flag == 1) {
            cout <<"Joker";
            return;
        }
        n-=3;flag=0;
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

/*                                      بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم
قَالَ رَبِّ اشْرَحْ لِي صَدْرِي (25) وَيَسِّرْ لِي أَمْرِي (26) وَاحْلُلْ عُقْدَةً مِّن لِّسَانِي (27) يَفْقَهُوا قَوْلي             */

#include <bits/stdc++.h>
#define ln "\n"
typedef long long ll;
using namespace std;

void solve()
{
    string s;cin>>s;
    int cnt=0;
    for(int i=0; i<s.size(); i++) {
        if(cnt == 0) {
            if(s[i] == 'h')
                cnt++;
        }
        else if(cnt == 1) {
            if(s[i] == 'e')
                cnt++;
        }
        else if(cnt == 2) {
            if(s[i] == 'i')
                cnt++;
        }
        else if(cnt == 3) {
            if(s[i] == 'd')
                cnt++;
        }
        else if(cnt == 4) {
            if(s[i] == 'i')
                cnt++;
        }
    }
    if(cnt >= 5) {
        cout<<"YES";
    }
    else
        cout <<"NO";

}


























void Main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}

int main()
{

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

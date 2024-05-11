/*                                      بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم
قَالَ رَبِّ اشْرَحْ لِي صَدْرِي (25) وَيَسِّرْ لِي أَمْرِي (26) وَاحْلُلْ عُقْدَةً مِّن لِّسَانِي (27) يَفْقَهُوا قَوْلي             */

#include <bits/stdc++.h>
#define ln "\n"
typedef long long ll;
using namespace std;

void solve()
{
    string s,s1;cin>>s;
    int cnt =0;
    s1=s;
    int x =s.size();
    for(int i=0; i<s.size()-1; i++) {
        if(s[i] != s[i+1])
            break;
        else
            cnt++;
    }
    if(cnt == x-1){
        cout<<"NO"<<ln;
    }
    else {
        cout<<"YES"<<ln;
        swap(s[cnt+1],s[0]);
        cout<<s<<ln;
    }
}


























void Main()
{
    int t = 1;
    cin >> t;
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

/*                                      بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم
قَالَ رَبِّ اشْرَحْ لِي صَدْرِي (25) وَيَسِّرْ لِي أَمْرِي (26) وَاحْلُلْ عُقْدَةً مِّن لِّسَانِي (27) يَفْقَهُوا قَوْلي             */

#include <bits/stdc++.h>
#define ln "\n"
typedef long long ll;
using namespace std;

void solve()
{
    int a=0,b=0,c=0,d=0,cnt=0;cin>>a>>b>>c>>d;
    int i=a;
    if(a<b) {
        for( i; i<=b; i++) {
            if(c == i)
                cnt++;
            if(d==i)
                cnt++;
        }
    }
    else {
        i=b;
        for(i; i<=a; i++) {
            if(c == i)
                cnt++;
            if(d==i)
                cnt++;
        }
    }
    if(cnt==2 || cnt ==0) {
        cout<<"NO"<<ln;
    }
    else if(cnt ==1) {
        cout<<"YES"<<ln;
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

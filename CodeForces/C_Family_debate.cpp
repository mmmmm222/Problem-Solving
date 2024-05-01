/*                                      بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم
قَالَ رَبِّ اشْرَحْ لِي صَدْرِي (25) وَيَسِّرْ لِي أَمْرِي (26) وَاحْلُلْ عُقْدَةً مِّن لِّسَانِي (27) يَفْقَهُوا قَوْلي             */

#include <bits/stdc++.h>
#define ln "\n"
typedef long long ll;
using namespace std;

deque<char> dq;
void solve()
{
    ll n, cnt = 0, x;
    cin >> n;
    char ch;
    while (n--)
    {
        cnt++;
        cin >> x;
        if (x == 4)
        {
            cin >> ch;
            dq.push_back(ch);
        }
        else if (x == 3)
        {
            cin >> ch;
            dq.push_front(ch);
        }
        else if (x == 1)
        {
            if (dq.size() == 1)
                cout << cnt << " " << dq.front() << ln;
            dq.pop_front();
        }
        else if (x == 2)
        {
            if (dq.size() == 1)
                cout << cnt << " " << dq.front() << ln;
            dq.pop_back();
        }
    }
}

void Main()
{
    int t = 1;
    // cin>>t;
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

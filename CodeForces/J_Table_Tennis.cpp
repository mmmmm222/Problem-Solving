/*                                      بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم
قَالَ رَبِّ اشْرَحْ لِي صَدْرِي (25) وَيَسِّرْ لِي أَمْرِي (26) وَاحْلُلْ عُقْدَةً مِّن لِّسَانِي (27) يَفْقَهُوا قَوْلي             */

#include <bits/stdc++.h>
#define ln "\n"
typedef long long ll;
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    deque<ll> dq(n);
    for (int i = 0; i < n; i++)
    {
        cin >> dq[i];
    }
    ll cnt = 0, temp = 0, winner = -1;
    //---------------------------
    if (n == 2)
    {
        if (dq[0] > dq[1])
            cout << dq[0];
        else
            cout << dq[1];
        return;
    }
    if (k > 1000)
    {
        sort(dq.rbegin(), dq.rend());
        cout << dq[0];
        return;
    }
    //---------------------------
    else
    {
        while (cnt != k)
        {
            if (dq[0] > dq[1])
            {
                dq.push_back(dq[1]);
                temp = dq[0];
                dq.pop_front();
                dq.pop_front();
                dq.push_front(temp);
                if (winner != dq[0])
                {
                    winner = dq[0];
                    cnt = 1;
                }
                else if (winner == dq[0])
                {
                    cnt++;
                }
            }
            else if (dq[0] < dq[1])
            {
                dq.push_back(dq[0]);
                dq.pop_front();
                if (winner != dq[0])
                {
                    winner = dq[0];
                    cnt = 1;
                }
                else
                {
                    winner = dq[0];
                    cnt++;
                }
            }
        }
        cout << dq[0];
    }
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

#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
#define b3dsh                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define dpp(arr, val) memset(arr, val, sizeof(arr))
#define ll long long
#define ull unsigned long long
#define dd double
#define ld long double
#define PQ priority_queue
#define pii pair<int, int>
#define pll pair<ll, ll>
#define S second
#define F first
#define MP make_pair
#define endl "\n"
#define PI 3.14159265
#define mod 1000000007
#define tests   \
    ll t;       \
    cin >> t;   \
    ll i_t = 0; \
    while (i_t++ < t)
#define loop(n) for (ll i = 0; i < (n); i++)
#define SetPre(n, x) cout << fixed << setprecision(n) << x
#define forp(i, a, b) for (ll i = a; i < b; i++)
#define forn(i, a, b) for (ll i = a; i > b; i--)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define trav(i, a) for (auto &i : a)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define si(a) ((int)(a).size())
#define ins insert
#define pb push_back
#define sz(v) ((int)((v).size()))
#define clr(v, d) memset(v, d, sizeof(v))
#define rep(i, v) for (int i = 0; i < sz(v); ++i)
#define lp(i, n) for (int i = 0; i < (int)(n); ++i)
#define lpi(i, j, n) for (int i = (j); i < (int)(n); ++i)
#define lpd(i, j, n) for (int i = (j); i >= (int)(n); --i)

using namespace std;

/*
/*

ll sum_seq(ll x) { return x * (x + 1) / 2; }

ll rev_sum_seq(ll x) { return (ll)(-1 + sqrt(1 + (8 * x))) / 2; }

ll sumBetween(ll x, ll y) { return  ((abs(x - y) + 1) * (x + y) / 2); }

ll sumEven(ll l, ll r) { return ((r / 2) * ((r / 2) + 1)) - (((l - 1) / 2) * (((l - 1) / 2) + 1)); }

ll sumOdd(ll l, ll r) { return (((r + 1) / 2) * ((r + 1) / 2)) - ((l / 2) * (l / 2)); }

ll gcd(ll a, ll b) { return (b == 0 ? a : gcd(b,a % b)); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

ll sumBetweendiv_byX(ll a, ll b, ll x) { return (sum_seq(max(a,b) / x) * x) - (sum_seq((min(a,b) - 1) / x) * x); }

bool is_num_divisible_by_k (string num, ll k) {
    ll remainder = 0;
    for (char& digit : num)
        remainder = (remainder * 10 + (digit - '0')) % k;

    return remainder == 0;
}

bool is_prime(ll num)
{
    if (num <= 1) return false;
    if (num <= 3)  return true;

    if (num % 2 == 0 || num % 3 == 0) return false;
    if ((num - 1) % 6 != 0 && (num + 1) % 6 != 0) return false;

    for (int i = 5; i*i <= num; i += 6)
        if (num % i == 0 || num % (i + 2) == 0)
            return false;

    return true;
}

int n; n = 3000;
vector<int> primes;
for (int i = 2; i <= n; i++)
{
    bool f = 1;
    for (int j = 2; j * j <= i; j++)
        if (i % j == 0) {
            f = 0; break;
        }

    if (f)
        primes.push_back(i);
}

*/

int main()
{
    b3dsh;
    int t = 1;
    // cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n), b(n);
        loop(n) { cin >> a[i]; }
        loop(n) { cin >> b[i]; }

        vector<int> pref(n + 1);
        pref[0] = 0;

        int sum = 0;

        for (int i = 1; i <= n; i++)
        {
            pref[i] = pref[i - 1];
            if (!b[i - 1]) // 0
                pref[i] += a[i - 1];
            else // 1
                sum += a[i - 1];
        }

        int res = 0;
        for (int i = k; i <= n; i++)
        {
            res = max(res, pref[i] - pref[i - k]);
        }
        cout << res + sum;
    }

    return 0;
}

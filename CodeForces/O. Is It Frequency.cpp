#include <iostream>
#include <iomanip>
using namespace std;

void f(bool x);

string s1, s2, s3;
bool x = 0, y = 1;
#define f1 s1##s2
#define f0 s2##s1

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout << fixed << setprecision(1);

    int t, x;
    cin >> t;
    int freq[t] = {0};
    int target;
    cin >> target;
    while (t--)
    {
        cin >> x;
        freq[x]++;
    }

    for (int i = 1; i <= target; i++)
    {
        cout << freq[i] << "\n";
    }
}

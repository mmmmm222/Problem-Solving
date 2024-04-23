
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout << fixed << setprecision(6);

    int t;
    cin >> t;
    while (t--)
    {
        int freq[26] = {0};
        int n, sum = 0;
        cin >> n;
        string S;
        cin >> S;
        for (int i = 0; i < n; i++)
        {
            if (freq[S[i] - 'A'] == 0)
            {
                freq[S[i] - 'A'] += 2;
            }
            else
            {
                freq[S[i] - 'A']++;
            }
        }
        for (int i = 0; i < 26; i++)
        {
            sum += freq[i];
        }
        cout << sum << '\n';
    }
}
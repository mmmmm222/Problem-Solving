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
    string S;
    cin >> S;
    int freq[26] = {0};
    for (int i = 0; i < t; i++)
    {
        S[i] = tolower(S[i]);
        freq[S[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] == 0)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}
#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
long long f(long long n);

struct C
{
    int x, y, z;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout << fixed << setprecision(1);
    //---------------------------------
    //---------------------------------
    int n;
    cin >> n;
    C arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].x >> arr[i].y >> arr[i].z;
    }
    for (int i = 0; i < n; i++)
    {
        int xcnt = 0, ycnt = 0, zcnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i].x == arr[j].x)
                xcnt++;
            if (arr[i].y == arr[j].y)
                ycnt++;
            if (arr[i].z == arr[j].z)
                zcnt++;
        }
        cout << xcnt - 1 << " " << ycnt - 1 << " " << zcnt - 1 << '\n';
    }
}

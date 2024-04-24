#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout << fixed << setprecision(4);

    int x, y, z;
    cin >> x >> y >> z;

    if (x >= y && x >= z) // x is the biggest
    {
        if (y + z > x)
        {
            cout << "0";
        }
        else if (y + z < x || y + z == x)
        {
            cout << ((x - (y + z)) + 1);
        }
    }
    else if (y >= x && y >= z) // y is the biggest
    {
        if (x + z > y)
        {
            cout << "0";
        }
        else if (x + z < y || x + z == y)
        {
            cout << ((y - (x + z)) + 1);
        }
    }
    else if (z >= x && z >= y) // z is the biggest
    {
        if (x + y > z)
        {
            cout << "0";
        }
        else if (x + y < z || x + y == z)
        {
            cout << ((z - (x + y)) + 1);
        }
    }

    return 0;
}

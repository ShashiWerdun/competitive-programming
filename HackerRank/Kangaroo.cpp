#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;
    if ((v1 - v2) != 0 && (x1 - x2) / (v2 - v1) == (float)(x1 - x2) / (v2 - v1) && (float)(x1 - x2) / (v2 - v1) > 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
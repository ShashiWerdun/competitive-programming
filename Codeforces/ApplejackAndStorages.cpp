#include <bits/stdc++.h>
using namespace std;
#define ll long long

int max1 = 0, max2 = 0, max3 = 0;

int main()
{
    int n;
    cin >> n;
    int arr_size = pow(10, 5) + 1;
    int a[arr_size] = {0}, b[arr_size] = {0}, e, x;
    char c;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a[x]++;
        if (max1 < a[x])
        {
            max1 = a[x];
        }
    }
    for (int i = 0; i < n; i++)
    {
    }
    cin >> e;
    for (int i = 0; i < e; i++)
    {
        cin >> c >> x;
        if (c == '-')
        {
            a[x]--;
        }
        else
        {
            a[x]++;
        }
        if (possible())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

bool possible()
{
    if (max1 >= 8 || (max1 >= 4 && max2 >= 4) || (max1 >= 6 && max2 >= 2) || (max1 >= 4 && max2 >= 2 && max3 >= 2))
    {
        ;
    }
}
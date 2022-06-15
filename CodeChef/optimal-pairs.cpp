#include <bits/stdc++.h>
using namespace std;
#define ll long long

int gcd(int a, int b)
{
    int result = min(a, b); // Find Minimum of a nd b
    while (result > 0)
    {
        if (a % result == 0 && b % result == 0)
        {
            break;
        }
        result--;
    }
    return result; // return gcd of a nd b
}

int g(int a, int b)
{
    int gc = gcd(a, b);
    return (gc + (a * b) / gc);
}

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        int n;
        cin >> n;
        int a = 1, b = n - 1, count = 0;
        while (a < b)
        {
            if (g(a, b) == n)
            {
                count++;
            }
            a++;
            b--;
        }
        count *= 2;
        if (n % 2 == 0)
        {
            if (g(n / 2, n / 2) == n)
            {
                count++;
            }
        }
        cout << count << endl;
    }
}
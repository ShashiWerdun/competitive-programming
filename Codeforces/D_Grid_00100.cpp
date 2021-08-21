//INCOMPLETE

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    int n, k, x, y;
    for (int cases = 0; cases < t; cases++)
    {
        cin >> n >> k;
        if (k == 0)
        {
            printf("0\n");
            for (int i = 0; i < n; i++)
            {
                printf("0\n");
            }
        }
        else
        {
            x = n * n - k;
            y = x % n;
            x /= n; //no. of zeroes per row
            if (y == 0)
            {
                cout << "0" << endl;
            }
            else
            {
                cout << "2" << endl;
            }
            for (int i = 0; i < n; i++)
            {
                if (y != 0)
                {
                    for (int j = 0; j < n - x - 1 - i; j++)
                    {
                        printf("1");
                    }
                    for (int j = n - x - 1 - i; j < n - i; j++)
                    {
                        printf("0");
                    }
                    y--;
                }
                else
                {
                    for (int j = 0; j < n - x - i; j++)
                    {
                        printf("1");
                    }
                    for (int j = n - x - i; j < n - i; j++)
                    {
                        printf("0");
                    }
                }
                for (int j = n - i; j < n; j++)
                {
                    printf("1");
                }
                printf("\n");
            }
        }
    }
    return 0;
}
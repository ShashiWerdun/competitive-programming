// INCOMPLETE
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        int n, k;
        cin >> n >> k;
        int num_mushrooms[n], index_of_max = 0, max = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> num_mushrooms[i] << endl;
            if (num_mushrooms[i] > max)
            {
                max = num_mushrooms;
                index_of_max = i
            }
        }
    }
}
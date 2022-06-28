#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        int n;
        cin >> n;
        int arr[n], xor_all = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            xor_all ^= arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] ^ xor_all == arr[i])
            {
                cout << arr[i] << endl;
                break;
            }
        }
    }
}
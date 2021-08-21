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
        cin>>n;
        ll a[n], b[n], moves = 0;
        uint32_t min_a=-1, min_b=-1;
        for (int i=0;i<n;i++)
        {
            cin>>a[i];
            if (a[i]<min_a)
            {
                min_a = a[i];
            }
        }
        for (int i=0;i<n;i++)
        {
            cin>>b[i];
            if (b[i]<min_b)
            {
                min_b = b[i];
            }
        }
        // cout<<min_a<<" "<<min_b<<endl;
        for (int i=0;i<n;i++)
        {
            moves += max(a[i]-min_a, b[i]-min_b);
        }
        cout<<moves<<endl;
    }
}
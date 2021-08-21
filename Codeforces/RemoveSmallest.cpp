#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        int n, count = 0;
        cin>>n;
        int a[101] ={ 0 };
        int x;
        vector<int> b;
        for (int i=0;i<n;i++)
        {
            cin>>x;
            if (a[x]==0)
            {
                b.push_back(x);
                a[x]=1;
                count++;
            }
        }
        sort(b.begin(), b.end());
        if (b[count-1] - b[0] == count-1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, m;
    cin >> n >> m;
    cout << ceil(m * n / (float)(m - 1)) - 1 << endl;
}
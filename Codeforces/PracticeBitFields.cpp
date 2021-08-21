#include <bits/stdc++.h>
using namespace std;
#define ll long long

/* bitfields can only be declared inside structs or unions */

struct digit
{
    unsigned int x : 1;
};

int main()
{
    digit d;
    int x : 1;
    cin >> x;
    d.x = x;
    cout << d.x << endl;
}
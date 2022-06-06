#include <bits/stdc++.h>
using namespace std;
#define ll long long

/*
MY IDEA:
1. a[0]=l, a[1]=l+1, a[2]=l+2, a[3]=l+3
2. xor=a[0]^a[1]^a[2]^a[3]
3. check which bits of xor are 1
4. bit x of xor is 1 => out of a[i], odd number of values have x bit as 1
5. now loop through a[i] and toggle the bit x of each one and check if they lie in the range (l,r)
6. if it lies in the range: replace the number with this new number and end loop
7. if none of them lie in the range: print(-1) and exit
8. do 3 to 7 until xor = 0
9. print(a[0],a[1],a[2],a[3])

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        int l, r;
        cin >> l >> r;
        int a[4];
        a[0] = l, a[1] = l + 1, a[2] = l + 2, a[3] = l + 3;
        int xor_value = a[0] ^ a[1] ^ a[2] ^ a[3];
        int first_bit_1 = 1 << INT_WIDTH;
        while (xor_value != 0)
        {
            int shift = 0;
            while (((xor_value << shift) & (first_bit_1)) != first_bit_1)
            {
                cout << "shifting" << endl;
                shift++;
            }
            bool flag = false;
            for (int i = 0; i < 4; i++)
            {
                int temp = (a[i] ^ (first_bit_1 >> shift));
                if (temp <= r && temp >= l)
                {
                    flag = true;
                    a[i] = temp;
                    break;
                }
            }
            if (flag)
            {
                xor_value = a[0] ^ a[1] ^ a[2] ^ a[3];
            }
            else
            {
                xor_value = -1;
                break;
            }
        }
        if (xor_value == -1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << endl;
        }
    }
} */

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        int l, r;
        cin >> l >> r;
        if (l % 2 == 0)
        {
            cout << l << " " << l + 1 << " " << l + 2 << " " << l + 3 << endl;
        }
        else if (r > l + 3)
        {
            cout << l + 1 << " " << l + 2 << " " << l + 3 << " " << l + 4 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}
//INCOMPLETE

#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool prime(int a)
{
	if(a == 2)
	{
		return true;
	}
	else if(a%2 == 0)
	{
		return false;
	}
	for(int i=3;i*i<a;i++)
	{
		if(a % i == 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int t;
	cin>>t;
	for(int cases=0;cases<t;cases++)
	{
		ll sum = 0;
		int n;
		cin>>n;
		int a[n+1] = {0};

		for(int i=2;i<=n;i++)
		{
			if(pow(i,2) <= n && a[i]==0)
			{
				if(prime(i))
				{
					sum += i;
					for(int j=2;j*i<=n+1;j++)
					{
						a[i*j] = 1;
					}
				}
			}
			else if(a[i] == 0)
			{
				sum += i;
			}
		}
		cout<<sum<<endl;
	}
}


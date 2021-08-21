//INCOMPLETE

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	int n;
	cin>>n;
	char a='1',b='0';
	string s;
	for(int i=0;i<pow(10,6);i++)
	{
		if(i%2)
		{
			s.push_back(a);
		}
		else
		{
			s.push_back(b);
		}
		if(s.length()>=n)
		{
			
		}
	}
	cout<<s;
}


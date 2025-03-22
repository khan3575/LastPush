#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
#define ll long long 
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
int main()
{
	FastIO;
	
	int t;
	cin >> t;
	while(t--)
	{
		ll n;
		cin >> n;
		ll x=0;
		ll val[10] = {0,9,99,999,9999,99999,999999,9999999,99999999,999999999};
		ll sum = 0;
		
		ll ans = INT_MAX;
		for(ll i = 0; i < 10; i++)
		{
			for(ll j = 0; j < 10; j++)
			{
				x = n + (val[j] * i);
				while(x)
				{
					ll temp = x%10;
					x/=10;
					if(temp==7)
					{
						ans= min(i,ans);
					}
				}
			}
		}
		cout<< ans <<'\n';
	}
	return 0;
}
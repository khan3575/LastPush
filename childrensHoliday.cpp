#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
#define ll long long 
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
vector<ll> t,y,z;
int m , n;
ll good(ll mid)
{
	ll total_ballons = 0;

	ll rem = m;
	for(int i = 0; i < n; i++)
	{

		ll total = t[i] * y[i] + z[i];
		total_ballons += (mid/total) * y[i];

		ll reming_time = mid % total ;

		total_ballons += min(reming_time / t[i], y[i]);
	}
	return m<=total_ballons ;
}
int main()
{
	FastIO;
	
	cin >> m >> n;
	t.resize(n);
	y.resize(n);
	z.resize(n);
	for(int i = 0; i < n; i++)
	{
		cin >> t[i]>> y[i] >> z[i];
	}

	ll l = 0, r = 1e10;
	while(r>=l)
	{
		ll mid = (l + r) / 2;

		if(good(mid))
		{
			r = mid -1;
		}
		else{
			l = mid + 1;
		}
	}
	cout<< l <<endl;
	ll rem = m;
	for(int i = 0; i<n; i++)
	{
		ll total_ballons = 0;
		ll total = t[i] * y[i] + z[i];
		total_ballons += (l/total) * y[i];

		ll reming_time = l % total ;

		total_ballons += min(reming_time / t[i], y[i]);
		if(total_ballons>rem)
		{
			cout<< rem <<" ";
			rem = 0;
		}
		else{
			cout<<total_ballons<<" ";
			rem -= total_ballons;
		}
	}
	cout<<endl;

	
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
#define ll long long 
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
ll w,h,n;
ll ok(ll mid)
{
	ll total_box = (mid/w) * (mid/h);
	return total_box < n;
}
int main()
{
	FastIO;
	
	cin >> w >> h >> n;

	ll l = 0, r = 1;
	while((ok(r)))
	{
		r<<=1;
	}
	//cout << r <<endl;
	while(r > l + 1)
	{
		ll mid = (l + r) >> 1;

		if(ok(mid))
		{
			l = mid;
		}
		else{
			r = mid;
		}
	}
	cout << r <<endl;
	
	return 0;
}
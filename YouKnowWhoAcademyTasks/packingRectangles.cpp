#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
#define ll long long 
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
ll w,h,n;
bool matching(ll mid)
{
	ll res = (mid/w) * (mid/h);
	if( res < n)
	{
		return true;
	}
	return false;

}
int main()
{
	FastIO;
	
	cin >> w >> h >> n;
	ll l = 0, r =1;
	while((r/w)*(r/h) < n)
	{
		r = (r<<1);
	}
	while(l<=r)
	{
		ll mid = (l + r) / 2;
		if(matching(mid))
		{
			l = mid + 1;
		}
		else{
			r = mid - 1;
		}
	}
	cout << l<<'\n';
	return 0;
}
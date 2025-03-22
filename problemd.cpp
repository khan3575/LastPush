#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
#define ll long long 
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

bool cmp(const pair<ll,ll> &a, const pair<ll,ll> &b)
{
	return a.first > b.first;
}
int main()
{
	FastIO;
	
	int t;
	cin >> t;
	while(t--)
	{
		int n, m;
		cin >> n >> m;
		vector<vector<ll>>v(n,vector<ll>(m));
		vector<pair<ll,ll>>a(n);
		
		for(int i =0; i<n; i++)
		{	ll x=0, y=0;
			for(int j = 0; j<m; j++)
			{
				cin>>v[i][j];
				x+= v[i][j];
				y+=x;
			}
			a[i].first= x;
			a[i].second = y;
		}
		sort(a.begin(),a.end(),cmp);
		
		ll ans = 0;
		for(int i=0; i<n;i++)
		{
			ans += a[i].second + m * (n-i-1) * a[i].first;
		}
		cout<< ans<<endl;
	}
	return 0;
}
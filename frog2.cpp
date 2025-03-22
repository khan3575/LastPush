#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
#define ll long long 
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

vector<ll>dp;
vector<ll>v;
int n, k;
ll solve(int i)
{
	if(i==0)
	{
		return 0;
	}
	if(i==1)
	{
		return abs(v[i]-v[i-1]);
	}
	if(dp[i]!=MOD)
	{
		return dp[i];
	}
	ll cost =MOD;
	for(int j = 1; j <= k; j++)
	{
		if(i-j<0)
		{
			continue;
		}
		cost=min(cost,solve(i-j) + abs(v[i]-v[i-j])) ;
	}
	dp[i] = cost;
	return dp[i];

}
int main()
{
	FastIO;
	
	cin >> n >> k;
	v.resize(n);
	dp.resize(n+1);
	for(int i = 0; i < n; i++)
	{
		cin>> v[i];
	}
	fill(dp.begin(),dp.end(),MOD);
	cout<< solve(n-1)<<endl;


	return 0;
}
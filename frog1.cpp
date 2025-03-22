#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
#define ll long long 
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)


int main()
{
	FastIO;
	
	int n;
	cin >> n;
	vector<int>v(n);
	for(int i = 0; i<n ; i++)
	{
		cin >> v[i];
	}
	vector<int>dp(n+6);
	fill(dp.begin(),dp.end(),MOD);
	dp[0]=0;
	for(int i = 1; i<n; i++)
	{
		dp[i] = dp[i-1] + abs(v[i]-v[i-1]);
		if(i>=2)
		{
			dp[i] = min(dp[i],dp[i-2]+abs(v[i]-v[i-2]));
		} 
	}
	cout<< dp[n-1]<<endl;
	return 0;
}
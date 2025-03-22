#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
#define ll long long 
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
const int N=2007;
vector<int>adj[N];
vector<int>height(N);
int ans= 0;

void dfs(int cur, int par)
{
	
	//cout<< cur<<" ";
	for(auto child : adj[cur])
	{
		//cout<< child<<endl;
		if(child == par) continue;

		dfs(child,cur);
		height[cur] = max(height[cur],height[child]);
		ans = max(height[cur], ans);
	}
	height[cur] +=1;
	ans= max(height[cur], ans);
}	

int main()
{
	FastIO;
	
	int n;
	cin >> n;
	for(int i = 0; i<n; i++)
	{
		int x;
		cin>>x;
		//cout<<x<<endl;
		if(x == -1)
		{
			x=0;
		}
		//cout<< x<<" "<< i+1<<endl;
		adj[x].push_back(i+1);
		adj[i+1].push_back(x);
	}
	dfs(0,-1);
	cout<< ans-1<<endl;

	return 0;
}
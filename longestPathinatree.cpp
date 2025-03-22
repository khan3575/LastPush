#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
#define ll long long 
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
const int N=1e5+5;
vector<int> adj[N];
vector<int> height(N);

int diameter = 0;
void dfs(int cur, int par)
{
	vector<int> child_height;
	for(auto child : adj[cur])
	{
		if(child == par) continue;

		dfs(child,cur);

		height[cur] = max(height[cur],height[child]);
		child_height.push_back(height[child]);
	}
	height[cur] +=1;
	sort(child_height.begin(),child_height.end());

	if(child_height.size()>=2)
	{
		int greatest = child_height.end()[-1];
		int second = child_height.end()[-2];
		int candidate = 1 + greatest + second;
		diameter = max(diameter,candidate);
	}
	diameter = max(diameter,height[cur]);
}

int main()
{
	FastIO;
	
	int n;
	cin >> n;
	for(int i = 0; i < n-1 ; i++)
	{
		int u,v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	dfs(1,-1);
	cout<< diameter-1<<endl;
	return 0;
}
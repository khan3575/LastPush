#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
#define ll long long 
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
vector<int> v[25];
int n;
vector<int> nodeheights(25);

void dfs(int cur, int par)
{
	for(auto child: v[cur])
	{
		if(child == par) continue;
		dfs(child, cur);

		nodeheights[cur] = max(nodeheights[cur],nodeheights[child]);
	}

	nodeheights[cur]+= 1;
}
int main()
{
	FastIO;
	
	cin >> n;
	int x;
	ll root=-1;
	for(int i = 1; i<=n; i++)
	{
		cin >> x;
		if(x==-1)
		{
			root=i;
			continue;
		}
		v[x].push_back(i);
		v[i].push_back(x);
	}
	dfs(root,-1);
	for(int i =  1; i<=n; i++)
	{
		cout<< nodeheights[i]<<" "; 
	}
	cout<<endl;
	return 0;
}
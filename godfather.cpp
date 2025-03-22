#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
#define ll long long 
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
const int N = 50005;
vector<int>adj[N];
vector<pair<int,int>>count_array;
void dfs(int cur, int par)
{
	int cnt = 0;
	//cout<< cur<<" ";
	for(auto child : adj[cur])
	{
		if(child == par) continue;

		dfs(child,cur);
		cnt++;
	}
	//cout<< cur<<" "<<cnt<<endl;
	count_array.push_back({cnt,cur});
}
int main()
{
	FastIO;
	
	int n;
	cin >> n;
	for(int i = 0; i < n-1; i++)
	{
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	dfs(1,-1);
	sort(count_array.begin(),count_array.end());
	int mx = 0;
	mx = count_array.end()[-1].first;
	vector<int> ans;
	for(int i = n-1; i>=0; i--)
	{
		if(count_array[i].first == mx)
		{
			ans.push_back( count_array[i].second);
		}
		else{
			break;
		}
	}
	sort(ans.begin(),ans.end());
	for (int i : ans)
	{
		cout<< i<<" ";
	}
	cout<<endl;

	return 0;
}
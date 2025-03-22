#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
#define ll long long 
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
ll INF = 1e17;

int main()
{
	FastIO;
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin >>  n>> m;
		vector<ll>a(n),b(m);
		for(int i = 0; i<n; i++)
		{
			cin>>a[i];
		}
		for(int i = 0; i < m; i++)
		{
			cin >> b[i];
		}
		sort(b.begin(),b.end());

		ll cur_element = -INF;

		bool ok= true;
		for(int i = 0; i<n; i++)
		{
			ll unchanged = INF, minus_val= INF;

			if(a[i]>= cur_element)
			{
				unchanged=a[i];
			}
			ll terget_val = a[i]+cur_element;

			auto it = lower_bound(b.begin(),b.end(),terget_val);

			if(it!=b.end())
			{
				minus_val = (*it) - a[i];
			}

			ll selected_val = min(unchanged, minus_val);

			if(selected_val == INF)
			{
				ok=false;
				break;
			}

			cur_element = selected_val;
		}
		if(ok)
		{
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
		
	}
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
#define ll long long 
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
int main()
{
	FastIO;
	
	int n, k;
	cin >> n >> k;
	vector<int> v(n);
	for(int i = 0; i < n; i++)
		cin >> v[i];

	while(k--)
	{
		bool ok = false;
		int x;
		cin >> x;
		int l=0, r= n-1;
		while(l<=r)
		{
			int mid = (l+r)/2;
			if(v[mid] == x)
			{
				ok = true;
				break;
			}
			else if(v[mid] < x)
			{
				l = mid + 1;
			}
			else{
				r = mid - 1;
			}
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
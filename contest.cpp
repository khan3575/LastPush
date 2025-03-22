#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
#define ll long long 
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
int main()
{
	FastIO;
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		vector<int> v(n);
		for(int i = 0; i < n; i++)
		{
			cin >>v[i];
		}
		sort(v.begin(),v.end());
		ll sum1 = 0, cnt1 = 0, sum2 = 0, cnt2 =  0;
		bool ok=true;
		for(int i = 0; i<n; i++)
		{
			if(ok)
			{
				sum1+= v[i];
				cnt1++;
				ok=false;
			}
			else{
				sum2+= v[i];
				cnt2++;
				ok=true;
			}
		}
		bool good = ((sum1/cnt1)==(sum2/cnt2));

		if(good)
		{
			cout<< "YES\n";
		}
		else{
			cout<<"NO\n";
		}


	}
	
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
#define ll long long 
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
int n;
const int N= 1e5+9;
vector<int>v(N);
int lower_bounds(int x)
{
	int l = 0, r= n-1;
	while(l<=r)
	{
		int mid = (l + r) / 2;
		if(v[mid] < x)
		{
			l = mid + 1;
		}
		else{
			r = mid - 1;
		}
	}
	return l;
}
int upper_bounds(int x){
	int l = 0, r = n-1; 
	while(l<= r)
	{
		int mid = (l + r)/2 ;
		if(v[mid] <= x)
		{
			l = mid + 1;
		}
		else{
			r = mid - 1;
		}
	}
	return r;
}
int main()
{
	FastIO;
	
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> v[i];
	sort(v.begin(),v.begin()+n);
	int q;
	cin >> q;
	while(q--)
	{
		int x, y;
		cin >> x >> y;
		int l = lower_bounds(x);
		int r = upper_bounds(y);
		cout<< r-l+1<<' ';
	}
	cout<<'\n';
	return 0;
}
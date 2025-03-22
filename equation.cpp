#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
#define ll long long 
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
bool good(double mid, double c)
{
	double res = (mid*mid) + sqrt(mid);

	if(res>=c)
	{
		return true;
	}
	else{
		return false;
	}
}
int main()
{
	FastIO;
	
	double c;
	cin >> c;
	double l = 0, r = c;
	for(int i = 0; i<100; i++)
	{
		double mid = (l+r) / 2.0;
		//cout<< mid<<endl;
		if(good(mid, c))
		{
			r=mid;
		}
		else{
			l = mid; 
			}
	}
	cout<<setprecision(8)<<l<<endl;
	return 0;
}
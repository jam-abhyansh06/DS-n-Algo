#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i, n) FOR(i, 0, (n))
#define FOR(i, a, b) for(int i=(a); i<(b); i++)
typedef vector<ll> vl;
#define PB push_back
#define ios() ios::sync_with_stdio(false); cin.tie(0);
#define scan(a,n) for(ll i=0;i<n;i++)	cin>>a[i];
#define print(a,n) for(ll i=0;i<n;i++)	cout<<a[i]<<"\n";
#define test() ll t; cin>>t; while(t--) 
#define endl "\n"

	
ll func(vl v, ll n, ll sum, ll cursum=0)
{
	if(n==-1)
	{
		if(cursum==sum)
			return 1;
		else
			return 0;
	}
	return func(v,n-1,sum,cursum)+func(v,n-1,sum,cursum+v[n]);

}


int main()
{
	#ifndef ONLINE_JUDGE
	freopen ("input.txt","r",stdin);
	freopen ("output.txt","w",stdout);
	#endif
	ios()
	
	ll n,sum;
	cin>>n>>sum;
	vl v(n+1);
	scan(v,n);
	cout<<func(v,n-1,sum);
	return 0;
}
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
#define INF 1e18

ll func(ll ar[], ll n)
{

	ll maxs=-INF, maxe=0;
	REP(i,n)
	{
		maxe+=ar[i];
		if(maxs<maxe)
			maxs = maxe;
		if(maxe<0)
			maxe=0;
	}
	return maxs;
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen ("input.txt","r",stdin);
	freopen ("output.txt","w",stdout);
	#endif
	ios()
	test()
	{
		ll n,k, neg=0;
		cin>>n>>k;
		ll ar[2*n+1];
		REP(i,n)
		{	cin>>ar[i];
			if(ar[i]<0)	neg++;
		}

		ll res = func(ar,n);

		if(k!=1)
		{
			FOR(i,n,2*n)	ar[i]=ar[i-n];
			ll x=func(ar,2*n);
			
			if(neg==0)
				res=res*k;
			else 
				{
					if(res>x)
						res = res*k;
					else
						res = x*(k-1);
				}
		}

		cout<<res<<endl;
	}
	return 0;
}

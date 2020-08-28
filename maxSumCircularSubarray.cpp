#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i, n) FOR(i, 0, (n))
#define FOR(i, a, b) for(int i=(a); i<(b); i++)
typedef vector<ll> vl;
#define PB push_back
#define ios() ios::sync_with_stdio(false); cin.tie(0);
#define scan(a,n) for(ll i=0;i<n;i++)	cin>>a[i];
#define print(a,n) for(ll i=0;i<n;i++)	cout<<a[i]<<" ";
#define test() ll t; cin>>t; while(t--) 
#define endl "\n"
#define INF 1e18


int main()
{
	#ifndef ONLINE_JUDGE
	freopen ("input.txt","r",stdin);
	freopen ("output.txt","w",stdout);
	#endif
	ios()
	ll n;
	cin>>n;
	vl ar(n+1);
	scan(ar,n);

	ll mine=0, minres=INF, maxe=0, maxres=-INF, totalsum=0, res;
	REP(i,n)
	{
		totalsum+=ar[i];
		mine+=ar[i];
		minres=min(mine,minres);
		if(mine>0)
			mine=0;

		maxe+=ar[i];
		maxres = max(maxres, maxe);
		if(maxe<0)
			maxe=0;
	}
	cout<<maxres<<" "<<minres<<" "<<totalsum<<endl;
	(totalsum-minres != 0)?res=max(maxres, totalsum-minres):res=maxres; //to handle the case when all array elements are negative
	// res=max(maxres, totalsum-minres);
	cout<<res<<endl;

	return 0;
}


// basic idea is to find the maximux sum for circular subarray, we subtract total sum and minimum possible sum of normal array
// then for final result we max() as shown in code



/*
vl ar(2*n);
	scan(ar,n)
	FOR(i,n,2*n-1)	ar[i] = ar[i-n];
	
	ll maxe=0, maxres=0;
	REP(i,2*n-1)
	{
		if(i==n)	maxe=0;
		if(i<n)
			maxe+=ar[i];
		else
			maxe+=ar[i]-ar[i-n];
		if(maxe>maxres)
			maxres=maxe;
		if(maxe<0)
			maxe=0;
	}
*/
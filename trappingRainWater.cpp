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


int main()
{
	#ifndef ONLINE_JUDGE
	freopen ("input.txt","r",stdin);
	freopen ("output.txt","w",stdout);
	#endif
	ios()
	ll n, max=-1, pos, res=0;
	cin>>n;
	vl ar(n+1);

	FOR(i,0,n)
	{
		cin>>ar[i];
		if(ar[i]>max)
		{
			max=ar[i];
			pos=i;
		}
	}

	ll currmax=ar[0];
	FOR(i,0,pos)
	{
		if(ar[i]<currmax)
			res+=currmax-ar[i];
		else
			currmax=ar[i];
	}

	currmax=ar[n-1];
	for(ll i=n-1; i>pos; i--)
	{
		if(ar[i]<currmax)
			res+=currmax-ar[i];
		else
			currmax=ar[i];
	}

	cout<<res<<endl;

	return 0;
}
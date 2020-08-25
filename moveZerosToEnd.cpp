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


int main()
{
	#ifndef ONLINE_JUDGE
	freopen ("input.txt","r",stdin);
	freopen ("output.txt","w",stdout);
	#endif
	ios()
	ll n, nZero=0;
	cin>>n;
	vl v(n+1);
	scan(v,n)
	REP(i,n)
	{
		if(v[i] != 0)
		{
			swap(v[i],v[nZero]);
			nZero++;
		}
	}
	print(v,n)
	return 0;
}

/* Other solution */

// REP(i,n)
// 	{
// 		cin>>v[i];
// 		if(v[i]==0)		nZero++;
// 	}

// 	ll x=n-1;
// 	REP(i,n)
// 	{
// 		if(v[i]==0)
// 		{
// 			while(1)
// 			{
// 				loop++;
// 				if(x < n-nZero)
// 					break;
// 				if(v[x]!=0)
// 				{
// 					swap(v[i],v[x--]);
// 					break;
// 				}
// 				else
// 					x--;
// 			}
// 		}
// 	}

// 	print(v,n)
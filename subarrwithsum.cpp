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
	ll n,sum, flag=0;
	cin>>n>>sum;
	ll ar[n+1];
	scan(ar,n)

	ll s=0,start=0,end=0;

	REP(i,n)
	{
		s+=ar[i];
		if(s>sum)
		{
			while(s>sum)
				s-=ar[start++];
		}
		else
			end=i;
		if(s==sum)
		{
			flag=1;
			break;
		}
	}
	
	if(flag==0)
		cout<<"not Found";
	else
	{
	// cout<<start<<" "<<end<<endl;
	FOR(i,start,end+2)	cout<<ar[i]<<" ";
	}

	return 0;
}